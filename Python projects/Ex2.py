import time
import random


rows = int(input("Enter the number of rows: "))
columns = int(input("Enter the number of columns: "))
syl = input("Enter the symbol to use: ")

num = random.randrange(0,9)
print(num)
for x in range(rows):
    for y in range(columns):
        print(syl,end="")
    print()
    print()
name = False
while not name:
 name = input("Enter your name:")

 if len(name) > 12:
    print("Your name must contain not more than 12 characters")
 elif  not name.isalpha():
    print("Your name should contain no digits")
 elif not name.find(" ") == -1:
    print("Your name should contain no spaces")
 else:
    print("Valid Name: Access Granted!" \
    f"Welcome {name}")   
    name = True

T = int(input("Enter the time in seconds: ")) 

for x in range(T,0,-1):
    seconds = x % 60
    minutes = int(x/60) % 60
    hours = int(x/3600)
    print(f"{hours:02}:{minutes:02}:{seconds:02}")
    time.sleep(1)

