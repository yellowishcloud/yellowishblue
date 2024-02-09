def has_3_next_to_3(nums):
    d = [i for i, le in enumerate(nums) if le==3]
    for i in range(len(d)-1):
        if d[i+1]-d[i] == 1:
            return True
    return False

has_3_next_to_3([1, 3, 3])
has_3_next_to_3([1, 3, 1, 3])
has_3_next_to_3([3, 1, 3])

print(has_3_next_to_3([1, 3, 3]))
print(has_3_next_to_3([1, 3, 1, 3]))
print(has_3_next_to_3([3, 1, 3]))