import re
l_str = 'abdilkhan_akniet_2006_dd'
x = re.findall("[a-z]+_[a-z]+", l_str)
if x:
    print("Matched, sequences:", x)
else:
    print("Didn't match")