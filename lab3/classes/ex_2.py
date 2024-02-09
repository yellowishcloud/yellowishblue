class Shape:
    def __init__(self):
        self.n = 0
    def area(self):
        print(self.n)

class Square(Shape):
    def __init__(self, length):
        Shape.__init__(self)
        self.length = length
        self.n = self.length**2

x1 = Shape()
x2 = Square(4)
x1.area()
x2.area()