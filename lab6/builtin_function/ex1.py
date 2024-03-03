p = 1
def func(x):
     global p 
     p *= x
     return x
print(p if list(map(func, l)) else '')