from Shared import * 

classes = pickle.load(open(picklepath, "rb"))

classBody = """
class {cl} {{
public:
{body}}};
"""

basedBody = """
class {cl} : {base} {{
public:
{body}}};
"""

functionBody = "    {static}{virtual}{type}{name}({params}){const};\n"
memberBody = "    {type} {name};\n"
offsetBody = "    {func}({type}, {name}, {offset});\n"

out = """// 
// Copyright camila314 & alk1m123 2021. 
// Autogenerated using a python script
//
#pragma once
#include <HeaderBase.hpp>

"""
for cl in classes:
    if "cocos2d" in cl.name:
        continue
    out += f"class {cl.name};\n"


def definable(cl, seen):
    for b in cl.base:
        if "cocos2d" not in b and b not in seen:
            return False
    return True

# i hate that this works
def queued(classes):
    seen = set()
    que = []
    for cl in classes:
        if definable(cl, seen):
            seen.add(cl.name)
            yield cl
        else:
            que.append(cl)

        for q in que.copy():
            if definable(q, seen):
                que.remove(q)
                seen.add(q.name)
                yield q


for cl in queued(classes):
    if "cocos2d" in cl.name:
        continue
    body = ""
    for info in cl.info:

        if isinstance(info, GenFunction):
            body += functionBody.format(
                static = "static " if info.static else "",
                virtual = "virtual " if info.virtual else "",
                type = f"{info.declare.type} " if info.declare.type else "",
                name = info.declare.name,
                params = ', '.join(p.type for p in info.parameters),
                const = " const" if info.const else "",
            )
        elif isinstance(info, str):
            body += "    " + info + "\n"
        elif info.getOffset(platform):
            body += offsetBody.format(
                func = "STRUCTPARAM" if info.declare.type in ["GameModes", "LevelDifficulty"] else "CLASSPARAM",
                type = info.declare.type,
                name = info.declare.name.replace('m_', ''),
                offset = info.getOffset(platform),
            )
        else:
            body += memberBody.format(
                type = info.declare.type,
                name = info.declare.name,
            )
    if len(cl.base) == 0:
        out += classBody.format(
            cl = cl.name,
            body = body,
        )
    else:
        out += basedBody.format(
            cl = cl.name,
            base = ", ".join("public " + b for b in cl.base),
            body = body,
        )

with open(os.path.join(os.path.dirname(__file__), "..", "Header.hpp"), "w") as f:
    f.write(out)