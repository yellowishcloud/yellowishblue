import re
l_str = 'bdjaldsdfgfgsfgfb'
x = re.search("a.*b$", l_str)
if x:
    print("Sequences", x.group())
else:
    print("Didn't match")