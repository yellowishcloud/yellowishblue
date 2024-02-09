def palindrome(w):
    return w[::-1] == w

if __name__ == "__main__":
    w = input()
    print(palindrome(w))