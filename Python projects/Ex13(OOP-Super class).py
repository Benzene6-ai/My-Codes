from math import pi
#super() = Fuction used in achild class to call methods from a parent class(Superclass)
#          Allows you to extend the functionality of the inherited methods

class Shape: #create a parent class to store the common attributess of all the classes and use the super() function to call them
    def __init__(self,colour,is_filled):
        self.colour = colour
        self.is_filled = is_filled
    def describe(self):
        print(f"It is {self.colour} and {"filled" if self.is_filled else "not filled"}")

class Square(Shape):
    def __init__(self,width,colour,is_filled):
        self.width = width
        super().__init__(colour,is_filled)#super() uses the constructor of the parent class with the attributes passed in
        #self.colour = colour
        #self.is_filled = is_filled
    def describe(self):
        print(f"It is a square with Area {self.width*self.width:.2f} cm2")
        super().describe()

class Rectangle(Shape):
    def __init__(self,length,width,colour,is_filled):
        self.length = length
        self.width = width
        super().__init__(colour,is_filled)#super() avoids repition and eases code readibility
        #self.colour = colour
        #self.is_filled = is_filled

class Circle(Shape):
    def __init__(self,radius,colour,is_filled):
        self.radius = radius
        super().__init__(colour,is_filled)
        #self.colour = colour
        #self.is_filled = is_filled
    def describe(self):#Method Overwriting: If a child class shares a same method as the parent class, the child's method is the one to be used
        print(f"It is a circle with Area {self.radius*self.radius*pi:.2f} cm2")
        super().describe()#super() is also used to extend the functionality of a function
                          #Here the super() function is used to acces the descibe method of the parent class
class Triangle(Shape):
    def __init__(self,height,width,colour,is_filled):
        self.height= height
        self.width = width
        super().__init__(colour,is_filled)
        #self.colour = colour
        #self.is_filled = is_filled

circle = Circle(21,"Lila",True)
print(circle.radius)
print(circle.colour)
print(circle.is_filled)
circle.describe()#the code uses the describe method of the Circle class and not of the Shape class

square = Square(45,"White",False)
print(square.width)
print(square.colour)
print(square.is_filled)
square.describe()