import random

win = False

print("********Rock,Paper,Sciscors Game********\n")

while not win:
 computer = random.randint(1,3)
 #OR: options = ("R","P","S")
 #    computer = random.choice(options)

 if computer == 1:
    computer = str('R')
 elif computer == 2:
    computer = str('P')
 else:
    computer = str('S') 

 user = input("Choose between the following:\n" \
              "'R' for Rock\n" \
              "'P' for Paper\n" \
              "'S' for Sciscors\n").upper() 
 
 if user not in ['R', 'P', 'S']:
        print("Invalid choice. Please try again.")
        continue
 
 print (f"You chosed {user}")
 print (f"The Computer chosed {computer}")
 
 if user == 'R' and computer == 'R':
    print("It's a Tie!")   
 elif user == 'R' and computer == 'P':
    print("Paper takes Rock, You loose !! ")
 elif user == 'R' and computer == 'S':
    win = True
    print("Rock takes sciscors.Congrats You Winn !!\n ")

 elif user == 'P' and computer == 'P':
    print("It's a Tie!")
 elif user == 'P' and computer == 'R':
    win = True
    print("Paper takes Rock.Congrats You Winn !!\n ") 
 elif user == 'P' and computer == 'S':
    print("Sciscors takes Paper.You loose !! ")  

 elif user == 'S' and computer == 'S':
    print("It's a Tie!")
 elif user == 'S' and computer == 'P':
    win = True
    print("Sciscors takes Paper.You Win !! \n") 
 elif user == 'S' and computer == 'R':
    print("Rock takes Sciscors.You loose !! ") 

print("**********End Game***********")