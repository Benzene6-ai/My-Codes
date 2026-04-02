class Vehicle:
    def __init__(self,name,model,year,colour):#constructor
        self.name = name
        self.model = model
        self.year = year
        self.colour = colour

    def drive(self):
            print(f"My {self.name} is driving")
        
    def stop_car(self):
         print(f"The {self.name} stoped")

class Bus(Vehicle):#Inheritance :passing the first class name in the second class
     def wheels(self):
          print(f"This {self.name} has four wheels")
     pass 
class Kar(Bus,Vehicle):#multiple inheritance: inherit from more than one parent clas
     pass
class motocycle(Bus):#mutilevel inheritamce: inherit from a parent which inherited from another parent
     pass            #the class motocycle has methods of the cass bus but the class bus has also methods from the class vehicle, therefore the class motocycle has methods of the class vehicle too

car = Vehicle("Toyota","Yaris",2023,"Blue")
bus = Bus("Mercedes","XXX",2023,"White")#the new class(child class) inherits from all the attributes and methods of the parent class
print(car.name)
print(car.model)
print(car.year)
print(car.colour)
car.drive()
car.stop_car()

print(bus.name)
print(bus.model)
print(bus.year)
print(bus.colour)
bus.drive()
bus.stop_car()

auto = Kar("BMW","X2",204,"Red")
auto.wheels()
