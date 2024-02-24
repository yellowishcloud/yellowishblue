import math
x = float(input('Input number of sides: '))
y = float(input('Input the length of a side: '))
A = y / (2 *math.tan(math.pi / x))
P = y * x
S = A * P / 2
print("The area of the polygon is:", round(S))