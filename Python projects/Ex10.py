import time
total = 0
max_borrow = 5000

def deposit_Money():
    global total #use 'global' to access ny value out of the fuction
    amount = float(input("Enter amount to be deposited: "))
    time.sleep(3)
    if(amount < 0):
        print("❌ That's not a valid amount !")
    else:
     total += amount
     print(f" ✅ You deposited {amount}$")
    return total

def withdraw_Money():
      global total
      amount = float(input("Enter amount to be withdrawn: "))
      time.sleep(3)
      if amount > total:
          print("❌ Insufficient Funds !!")
      else:
       print(f"✅ You withdrawed {amount}$")
       total -= amount
      return total

def show_Balance():
     balance = print(f"Your balance is: {total:.2f}$")
     return balance

def borrow_Money():
    global total
    global max_borrow

    amount = float(input("Enter amount you would like to borrow: "))
    time.sleep(3)
    if amount > max_borrow:
        print(f"❌ Sorry, you are not eligible to borrow that amount. You borrow limit is now {max_borrow}")   
    else:
        max_borrow -= amount
        total += amount
        print(f"✅ You borrowed {amount}$. Remaining borrow limit: {max_borrow}$")

    return total



print("****************************************")
print("*       WELCOME TO THE SWISS BANK !    *")
print("****************************************")
print()
Quit = False
while not Quit:

 choice = int(input("What will you want to do ?\n" \
 "1.Deposit Money\n" \
 "2.Withdraw Money\n" \
 "3.Show Balance\n"
 "4.Borrow Money\n" \
 "5.Quit\n"))

 match choice:
    case 1:
        deposit_Money()
        show_Balance()
    case 2:
        withdraw_Money()
        show_Balance()
    case 3:
        time.sleep(3)
        show_Balance()
    case 4:
         borrow_Money()
         show_Balance()
    case 5:
        Quit = True
        print()
        print("****************************************")
        print("*        Thanks for visiting !!        *")
        print("****************************************")
    case _:
        print("Invalid Input !!")
