def unique(lis):
    d = []
    for i in lis:
        if i not in d: 
            d.append(i)
    return d
if __name__ == "__main__":
    lis = list(map(int, input().split()))

    new = unique(lis)

    print(new)