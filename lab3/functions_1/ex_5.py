
from itertools import permutations

def perm(s):
    return list(permutations(s))


a = perm('base')
for i in a:
    print(i)



