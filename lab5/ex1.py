import re

l_str = 'cdfdabdesha'

x = re.search("ab*", l_str)
if x:
    print("Matched ", x.group())
else:
    print("Didn't match")