import parsecac
import os

starter_code = open("cc_defs.begin.hpp", "r").read()

ender_code = open("cc_defs.end.hpp", "r").read()

def build_cls(funky_cls):
    out = ""
    if "cocos2d" in funky_cls.name:
        return ""
    out += f"class {funky_cls.name} : "
    out += ", ".join(f"public {b}" for b in funky_cls.base)
    if len(funky_cls.base) > 0:
        out += ", "
    out += "public GDObj {\n"
    for info in funky_cls.infos:
        static = "static " if info.static else ""
        virtual = "virtual " if info.virtual else ""
        ret = info.ret
        name = info.name
        addr = info.addr
        if info.func:
            param = ', '.join(info.args)
            if ret == '':
                out += f"    {name}({param});\n"
            else:
                out += f"    {static}{virtual}{ret} {name}({param});\n"
        else:
            if addr is not None:
                out += f"    CLASS_PARAM({ret}, {name}, {addr});\n"
            else:
                out += f"    {ret} m_{name};\n"
    out += "};\n\n"

    return out

d = parsecac.parse("cacnew.mm")
open("cc_defs.hpp", "w").write(starter_code + ''.join(f'class {cl};\n' for cl in d.keys() if "cocos2d" not in cl) + "\n\n" + ''.join(build_cls(cl) for cl in d.values()) + ender_code)
