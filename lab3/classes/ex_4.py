class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def show(self):
        print(f'(x, y) = {self.x, self.y}')
    
    def move(self, x1, y1):
        self.x += x1
        self.y += y1
    
    def dist(self, x1, y1):
        return ( (self.x - x1)**2 + (self.y - y1)**2)**(1/2)

d = Point(9, 10)

d.show()

d.move(+4, -5)
d.show()

print(f'distance = {d.dist(0, 0)}')