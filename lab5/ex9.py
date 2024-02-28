import re

def test(pattern, text, testnum, result):
    res = re.sub(pattern, r'\1 \2', text)
    print(res)
    if res == result:
        print(f'Test {testnum} passed!')
    else:
        print(f'Test {testnum} didn\'t pass')

pattern = r'(?P<low>\w)(?P<upp>[A-Z])'
test(pattern, "MyNameIs", 1, "My Name Is")
test(pattern, " MyUpperTest IAmRobot", 2, " My Upper Test I Am Robot")