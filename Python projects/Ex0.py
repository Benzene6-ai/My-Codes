#name = "Mich"
#age = 23
#gpa = 2.4

#age = float(age)
import math #to include math functions like sqrt 
#print(help(str))
num = int(input("Enter a number: "))
result = "The number is Even" if num % 2 == 0 else "The number is Odd" #Tenary operator wie in C++: 'return X' if 'condition' else 'return Y'
print(result)
choice = 5
while not choice == 0:
 choice = int(input("Enter 1 to calcultate the area of a rectangle\n" \
                    "Enter 2 to calcultate the area of a circle\n"
                    "Enter 3 to find the hypotheneus of a triangle\n"
                    "Enter 4 to use the mini calculator\n"
                    "Enter 0 to quite\n"))
 if choice == 1:
   print("****Welcome to RectangleArea Calculator****")
   print("\n")

   length = int(input("Enter the Length of the rectangle in cm: "))
   width = int(input("Enter the with of the rectangle in cm: "))

   area = length*width
   print("The Area of the Rectangle is: "+str(area))    
 elif choice == 2:
   print("****Welcome to CircleArea Calculator****")
   print("\n")

   radius = int(input("Enter the Radius of the circle in cm: "))

   area2 = math.pi * pow(radius,2)
   print("The Area of the circle is: "+str(area2))

 elif choice == 3:
   print("*****Welcome to Hypotheneus calculator****")
   print("\n")
   
   a = float(input("Enter the side A: "))
   b = float(input("Enter the side B: "))

   c = math.sqrt(pow(a,2) + pow(b,2))
   print("The Hypotheneus C of the trinagle is: "+str(round(c,2)))

 elif choice == 4:
   operator = str(input("What will you like to do ?\n" \
                        "'+' for addiion\n" \
                        "'-' for substraction\n" \
                        "'*' for multiplication\n" \
                        "'/' for division\n"))
   if operator == '+':
      a = int(input("Enter the first number to add: "))
      b = int(input("Enter the second number to add: "))

      sum = a + b
      print("The sum of the two numbers is: "+str(sum))

   elif operator == '-':
      a = int(input("Enter the first number to substract: "))
      b = int(input("Enter the second number to substract: "))

      difference = a - b
      print("The difference of the two numbers is: "+str(difference))

   elif operator == '*':
      a = int(input("Enter the first number to multiply: "))
      b = int(input("Enter the second number to multiply: "))

      product = a * b
      print("The product of the two numbers is: "+str(product))

   elif operator == '/':
      a = int(input("Enter the first number to add: "))
      b = int(input("Enter the second number to add. "))

      division = a / b
      print("The division of the two numbers is: "+str(round(division,2)))
   
   else:
      print("Invalid operator entered!!")          

 elif choice == 0:
   print("Thanks for visiting")
   break
 
 else:
   print("Invalid choice")       
   #string methods
   #length of the string : = len(string)
   #find the position of a chareacter : name.find("character")
   #find the position starting from the end : name.rfind("chracter")
   #capitalise : name.capitalize()
   #upper case : string = name.upper()
   # lower case : string = name.lower()
   #  to list of all the string methods : print(help(str))

