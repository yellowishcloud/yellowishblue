def sq(n):
    for i in range(n+1):
        yield i*i   

m = sq(6)
for i in m:
    print(i)