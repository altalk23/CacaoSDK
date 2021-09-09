import os
import sys
import platform

reserved = {
    'static': 'STATIC',
    'virtual': 'VIRTUAL',
    'const': 'CONST',
    'stdcall': 'STDCALL',
    'thiscall': 'THISCALL',
    'optcall': 'OPTCALL',
    'unsigned': 'UNSIGNED',
    'class': 'CLASS'
}

tokens = [
    'ASSIGN',
    'ADDRESS',
    'NUM',

    'IDENT',
    'LPAREN',
    'RPAREN', 
    'LTRI',
    'RTRI', 
    'LCURLY',
    'RCURLY', 

    'WHITESPACE', 

    'SEMI', 
    'COMMA', 
    'COLON', 
    
    'VOLATILE', 
    'VOLATILEDATA',
    'TEMPLATEDATA'
] + list(reserved.values())

states = (
    ('volatile','exclusive'),
    ('template','exclusive'),
    ('info','inclusive'),
)

t_info_ASSIGN = r"="
t_info_ADDRESS = r"0x[0-9a-fA-F]+"
t_info_NUM = r"[0-9]+"
t_info_LPAREN = r"\("
t_info_RPAREN = r"\)"

t_info_SEMI = r";"
t_INITIAL_info_COMMA = r","
t_COLON = r":"

t_ignore_WHITESPACE = r"[\s\t]"
t_ignore_COMMENT = r'//.*'

t_template_TEMPLATEDATA = r"[^<>]+"
def t_volatile_VOLATILEDATA(t):
    r"[^{};]+"
    t.lexer.lineno += t.value.count("\n")
    return t

def t_VOLATILE(t):
    r"volatile"
    t.lexer.begin('volatile')
    return t

templatenest = 0
def t_info_template_LTRI(t):
    r"<"
    global templatenest
    if templatenest == 0:
        t.lexer.begin('template')
    templatenest += 1
    return t

def t_info_template_RTRI(t):
    r">"
    global templatenest
    templatenest -= 1
    if templatenest == 0:
        t.lexer.begin('info')
    return t

curlynest = 0
def t_INITIAL_volatile_LCURLY(t):
    r"{"
    global curlynest
    if curlynest == 0:
        t.lexer.begin('info')
    if curlynest == 1:
        t.lexer.begin('volatile')
    curlynest += 1
    return t

def t_INITIAL_volatile_RCURLY(t):
    r"}"
    global curlynest
    curlynest -= 1
    if curlynest == 0:
        t.lexer.begin('INITIAL')
    if curlynest == 1:
        t.lexer.begin('info')
    return t

def t_volatile_SEMI(t):
    r";"
    global curlynest
    if curlynest == 1:
        t.lexer.begin('info')
    return t

def t_IDENT(t):
    r'[\w\~][\w\:\&\[\]\+\-\*\/\=\%\.]*'

    if t.value == "volatile":
        return t_VOLATILE(t)

    t.type = reserved.get(t.value,'IDENT')
    return t

def t_newline(t):
    r'\n+'
    t.lexer.lineno += t.value.count("\n")

def t_error(t):
    print(t)
    raise ValueError("initial uwu")

def t_volatile_error(t):
    print(t)
    raise ValueError("volatile uwu")

def t_template_error(t):
    print(t)
    raise ValueError("template uwu")

def t_info_error(t):
    print(t)
    raise ValueError("info uwu")

import ply.lex as lex
lexer = lex.lex()

# def getNext():
#     tt = lexer.token()
#     if not tt:
#         # raise ValueError("EOF when parsing")
#     return tt

# lexer.input(open("MacOS/Test.mm","r").read())
# while True:
#     # t = getNext()
#     t = lexer.token()
#     if not t:
#         break
#     print(t)


