def spy_game(nums):
    d = -1
    while True:
        try:
            d = nums.index(7,d+1)
            if nums[:d].count(0) >= 2:
                return True
        except:
            #return False
            break
    return False

spy_game([1,2,4,0,0,7,5]) #True
spy_game([1,0,2,4,0,5,7]) #True
spy_game([1,7,2,0,4,5,0]) #False


print(spy_game([1,2,4,0,0,7,5])) #True
print(spy_game([1,0,2,4,0,5,7])) #True
print(spy_game([1,7,2,0,4,5,0])) #False