import ex_10, ex_11, ex_9


#Uniques
l = list(map(int, input("write a list  ").split()))
print(f'Uniques = {ex_10.unique(l)}')


#Palindrom
s = input("Write a sectence to check palindrom  ")
if ex_11.palindrome(s):
    print("It is a palindrom")
else:
    print("No, it isn't palindrom")


#Volume
r = int(input("Radius of sphere  "))
print(f'Volume of sphere = {ex_9.v(r)}')