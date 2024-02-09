""" 
    r + c = 35     
    4r + 2c = 94   

    c = -(numleg-4*numhead)/2, 
    r = numhead-c
"""

def solve(numheads, numlegs):
    c = -(numlegs-4*numheads)/2
    r = numheads-c
    return r, c

print(solve(35, 94))