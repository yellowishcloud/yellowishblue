import time 
import math 

def test(a, t):
    time.sleep(t/1000)
    print(f'Square root of {a} after {t} miliseconds is {math.sqrt(a)}')


a = float(input('Input:\n'))
t = float(input())
test(a, t)