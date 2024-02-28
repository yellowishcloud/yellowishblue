import re
l_str = "abdFFNJDSilkhan.,akniet2006dd"
x = re.findall("[A-Z][a-z]+", l_str)
if x:
    print("Sequences", x)
else:
    print("Didn't match")