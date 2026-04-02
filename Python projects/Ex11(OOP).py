import time
import random
import os

class BankAccount:
    def __init__(self, holder, running):
        self.account_holder = holder
        self.account_number = None#random.randint(1000,2000) 
        self.balance = 0.0
        self.running = running
        self.account_infos = []
        self.account_created = False
        self.cpasswort = []
        
    def deposit(self,amount):
        #amount = int(input("Enter Amount to deposit: "))
        if amount < 0:
            print("❌ Amount should be greater than 0$!")
        else:
         print(f"✅ Successfull deposit of {amount}$ !!")
         self.balance += amount
        return self.balance
    
    def withdraw(self,amount):
        if amount > self.balance:
            print("❌ Insuuficient funds !")
        elif amount < 0:
            print("❌ Amount should be greater than 0$!")
        else:
            print("✅ Withdrawl done succesfully !")
            self.balance -= amount
        return self.balance

    def get_balance(self):
        print(f"💰 Your balance is {self.balance}$")
        return self.balance

    def create_account(self):
      user = input("Would you like to create an acount ? (Y/N)").capitalize()
      if user == "Y":
       #Name1 = input("Enter your first Name: ").capitalize()####
       #Name2 = input("Enter your second Name: ").capitalize()####
       #full_name = create_Name(Name1,Name2)
       Date_ofBirth = input("Enter your Date of Brth: ")####
       Country = input("Enter your Country of Origin: ").capitalize()####
       ps = False
       while not ps:
        postal_c = (input("Enter your postal code: ")).capitalize()####
        if len(postal_c) > 5 or len(postal_c) < 5:
         print("❌ Invalid Postal code")
        else:
         ps = True
       em = False
       while not em:
        Mail = input("Enter your email address: ").lower() #####
        if not Mail.endswith("@gmail.com"):
         print("❌ Invalid email address!")
        else:
         em = True
       phone = (input("Enter your phone number: ")).capitalize()#####
       Date = (input("What is th date of today ? "))
       #self.account_infos.append(Name1)
       #self.account_infos.append(Name2)
       #self.account_infos.append(full_name)
       self.account_infos.append(Date_ofBirth)
       self.account_infos.append(Country)
       self.account_infos.append(postal_c)
       self.account_infos.append(Mail)
       self.account_infos.append(phone)
       self.account_infos.append(Date)
       self.account_number = random.randint(1000,2000) 
      elif user == "N":
       print("********Thanks for the visit!*********")
      else:
       print("Invalid Input !")
    
    def display_Accountinfos(self,**kwargs):
     print("***********ACCOUNT INFOS************")
     for key,value in kwargs.items():#.items for all the elements, .values for the values(katto str etc), .keys for the keys(street,hausnumber etc)
        print(f"{key} : {value}")

    def create_password(self):
        password = input("Enter a password: ")
        self.cpasswort.append(password)

    def check_password(self):
        access = False
        while not access:
            epassword = input("Enter your password: ")
            if epassword not in self.cpasswort:
                print("Invalid Password! ❌ ACCESS DENIED!")
            else:
                access = True
                print("✅ ACCESS GRANTED!")
         
def create_Name(first,last):  
     first = first.capitalize()
     last = last.capitalize()
     return first + " " + last

def clear_screen():
    # For Windows
    if os.name == 'nt':
        os.system('cls')
    # For macOS and Linux
    else:
        os.system('clear')    

def main():
    print("🔐 Let's get started !")

    first_name = input("Enter your first name: ").capitalize()
    second_name = input("Enter your second name: ").capitalize()
    full_n = create_Name(first_name,second_name)

    user = BankAccount(full_n,False)
    print(f"Welcome {user.account_holder} : Account  Nr-{user.account_number}")

    while not user.running:
     
     print()
     choice = (input(("Choose between the folowing:\n" \
     "1.Deposit Money\n" \
     "2.Withdraw Money\n" \
     "3.Show Balance\n"
     "4.Display Account infos\n" \
     "5.Create an account\n"
     "6.Quit\n")))
     match choice:
        case "1":
            time.sleep(2)
            if len(user.account_infos) < 6:
             print("⚠️ No account found. Please create an account first.")
            else:
             user.check_password()
             money = int(input("Enter amount to deposit: ")) 
             time.sleep(2)
             user.deposit(money)
             user.get_balance()
        case "2":
            time.sleep(2)
            if len(user.account_infos) < 6:
             print("⚠️ No account found. Please create an account first.")
            else:
             user.check_password()
             money1 = int(input("Enter Amount to withdraw: "))
             time.sleep(2)
             user.withdraw(money1)
             user.get_balance()
        case "3":
            if len(user.account_infos) < 6:
             print("⚠️ No account found. Please create an account first.")
            else:
             user.check_password()
             time.sleep(2)
             user.get_balance()
        case "4":
            time.sleep(2)
            if len(user.account_infos) < 6:
             print("⚠️ No account information found. Please create an account first.")
            
            else:
             user.check_password()
             user.display_Accountinfos(First_Name = first_name, 
                                      Second_Name = second_name,
                                      Full_Name = full_n,
                                    Date_of_Birth = user.account_infos[0],
                                           Country= user.account_infos[1],
                                      Postal_code = user.account_infos[2],
                                            email = user.account_infos[3],
                                              Tel = user.account_infos[4],
                                     Account_Number = user.account_number,
                            Account_Date_Creation = user.account_infos[5])
        case "5":
           time.sleep(2)
           if len(user.account_infos) == 6:
              user.account_created = True
              print("⚠️ You already have an account")
              decide = input("Will you want to reset your Account ?(Y/N)").upper()
              if decide == "Y":
                user.check_password()
                user.account_created = False
                time.sleep(2)
                user.account_infos.clear()
                user.cpasswort.clear()
                first_name = None
                second_name = None
                full_n = None
                first_name = input("Enter your first name: ").capitalize()
                second_name = input("Enter your second name: ").capitalize()
                full_n = create_Name(first_name,second_name)
                user.create_account()
                user.create_password()
                time.sleep(1)
                print("✅ Account Created Successffuly !")
              else:
                user.account_created = True 
                continue
           else:
             user.create_account()
             user.create_password()
             time.sleep(1)
             clear_screen()
             print("✅ Account Created Successffuly")

        case "6":
            clear_screen()
            print(f"Thanks for visiting. Good bye {full_n} \U0001F601 👋 ")
            user.running = True
        case _:
            time.sleep(1)
            print("❌ Invalid Input")

main()
