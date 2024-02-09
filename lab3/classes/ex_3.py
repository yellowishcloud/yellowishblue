import ex_2

class Rectangle(ex_2.Shape):
    def __init__(self, l, w):
        ex_2.Shape.__init__(self)
        self.l = l
        self.w = w
    def area(self):
        return self.l*self.w

r = Rectangle(4, 5)
print(r.area())