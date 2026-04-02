class Animal:
    alive = True

class Dog(Animal):
    def speak(self):
        print("WOOUFF !")

class Cat(Animal):
    def speak(self):
        print("Mooeww !")

class Car():
    def speak(self):
        print("Vrooom !")

Animals = [Dog(),Cat(),Car()]

for animal in Animals:
    animal.speak()