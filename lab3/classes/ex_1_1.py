class Strings():
    def __init__(self):
        self.s = ""
    def getString(self):
        self.s = input()
    def printString(self):
        print(self.s.upper())
n = Strings()
n.getString()
n.printString()