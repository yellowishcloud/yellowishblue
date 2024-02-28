import re

def test(pattern, text, testnum, result):
    res = re.split(pattern, text)
    print(res)
    if res == result:
        print(f'Test {testnum} passed!')
    else:
        print(f'Test {testnum} didn\'t pass')

pattern = '[A-Z]'
test(pattern, 'somethingGisKgettingJterriblyEwrongR4', 1, ['something', 'is', 'getting', 'terribly', 'wrong', '4'])