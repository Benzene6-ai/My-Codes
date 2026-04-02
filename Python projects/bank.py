class BankAccount:
  def __init__(self,  running):
        #self.account_holder = holder
        self.account_number = None#random.randint(1000,2000) 
        self.balance = 0.0
        self.running = running
        self.account_infos = []
        self.account_creted = False
        self.cpasswort = []

  def create_accounts(self):
    fname = input("Enter your first name: ").capitalize()
    lname = input("Enter your last name: ").capitalize()
    POB = input("Enter your place of birth: ").capitalize()
    print(fname)
    account = {"firstname":fname.strip(),
               "lastname":lname.strip(),
               "POB":POB.strip(),
               "Balance":self.balance}
    self.account_infos.append(account)

  def display_accountInfos(self):
    inp = input("Enter your first name: ")
    found = False
    for account in self.account_infos:
     if inp == account['firstname']:
        found = True
        print(f"Firstname: {account['firstname']}")
        print(f"Lastname: {account['lastname']}")
        print(f"Place of Birth: {account['POB']}")
        print(f"Current Balance: {account['Balance']}")
    if not found:
        print(f"No Account with name {inp} was found")

  def deposit(self,amount):
        #amount = int(input("Enter Amount to deposit: "))
        if amount < 0:
            print("❌ Amount should be greater than 0$!")
        else:
         print(f"✅ Successfull deposit of {amount}$ !!")
         self.balance += amount
        return self.balance
  
  def get_balance(self):
        print(f"💰 Your balance is {self.balance}$")
        return self.balance
#def main():
    bank = BankAccount()

    while bank.running:
        choice = input("What would you like to do?\n"
                       "1. Create an Account\n"
                       "2. Display Account Info\n"
                       "3. Perform Bank Actions\n"
                       "4. Exit\n")

        if choice == '1':
            bank.create_account()
        elif choice == '2':
            bank.display_account_info()
        elif choice == '3':
            bank.perform_actions()
        elif choice == '4':
            bank.running = False
            print("Thanks for visiting!")
        else:
            print("Invalid input!")

  
def main():
   user = BankAccount(True) 
   while user.running:
    choice = input("What would you like to do ?\n" \
    "1.Create an Account\n" \
    "2.Diplay your AccountInfos\n"
    "3.Perform BankACTIONS\n" \
    "4.Exit\n")

    if choice == '1':
      user.create_accounts()
    elif choice == '2':
      user.display_accountInfos()

    elif choice == '3':
       wahl = input("What would like to do ?\n" \
       "1.Deposit Money\n" \
       "2.Show your Balance\n" \
       "3.Return to main Menu\n")
       if wahl == '1':
          amount = int(input("How much would you like to deposit ?"))
          user.deposit(amount)
       elif wahl == '2':
          user.get_balance()
       elif wahl == '3':
          break
          
    elif choice == '4':
      user.running = False
      print("Thanks for visiting !")
    else:
       print("Invalid Input !")

main()
      
      