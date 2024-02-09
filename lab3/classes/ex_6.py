def filter_prime(n):
    if n<2: 
        return False
    for i in range(2, int(n**(1/2))+1):
        if n%i == 0:
            return False
    return True

l = [-10, -9, -8, -7, -6, -5,-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8]

nums = list(filter(lambda x:filter_prime(x), l))
print(nums)