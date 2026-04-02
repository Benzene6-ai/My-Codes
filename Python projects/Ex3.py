import random
user = input()
print("*****Number Guessing Game*****")

num = random.randint(1,100) 
win = False

while not win:
 userchoice = int(input("Guess a number between 1 and 100: "))
 if userchoice < num:
    print("You are too low ! Try again")
 elif userchoice > num:
    print("You are too High ! Try again")
 else:
    win = True
    print("Congrats you got the num!!\n")
print("*****Endgame******\n")  