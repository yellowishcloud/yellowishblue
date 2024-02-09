def filter_prime(l):
    newl = []
    for i in l:
        if i < 1:
            continue
        check = True
        for j in range(2, int(pow(i, 1/2))+1):
            if i%j == 0:
                check = False
                break
        if check:
            newl.append(i)
    return newl

#You are given list of numbers separated by spaces
a = list(map(int, input().split()))

print(filter_prime(a))