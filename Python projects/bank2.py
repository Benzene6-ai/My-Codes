class Account:
    def __init__(self, firstname, lastname, pob):
        self.firstname = firstname
        self.lastname = lastname
        self.pob = pob
        self.balance = 0.0

    def deposit(self, amount):
        if amount <= 0:
            print("❌ Amount should be greater than 0$!")
        else:
            self.balance += amount
            print(f"✅ Successfully deposited {amount}$!")
        return self.balance

    def get_balance(self):
        print(f"💰 Current balance for {self.firstname} is {self.balance}$")
        return self.balance

    def display_info(self):
        print(f"Firstname: {self.firstname}")
        print(f"Lastname: {self.lastname}")
        print(f"Place of Birth: {self.pob}")
        print(f"Balance: {self.balance}$")
        
class BankAccount:
    def __init__(self):
        self.accounts = []
        self.running = True

    def create_account(self):
        fname = input("Enter your first name: ").capitalize().strip()
        lname = input("Enter your last name: ").capitalize().strip()
        pob = input("Enter your place of birth: ").capitalize().strip()
        account = Account(fname, lname, pob)
        self.accounts.append(account)
        print(f"✅ Account created for {fname} {lname}!")

    def find_account(self, fname):
        for acc in self.accounts:
            if acc.firstname.lower() == fname.lower():
                return acc
        return None

    def display_account_info(self):
        fname = input("Enter your first name: ")
        acc = self.find_account(fname)
        if acc:
            acc.display_info()
        else:
            print(f"No account found with the name {fname}")

    def perform_actions(self):
        fname = input("Enter your first name to access your account: ")
        acc = self.find_account(fname)
        if not acc:
            print("❌ Account not found.")
            return

        while True:
            choice = input("What would you like to do?\n"
                           "1. Deposit Money\n"
                           "2. Show Balance\n"
                           "3. Return to main menu\n")
            if choice == '1':
                try:
                    amount = float(input("Enter amount to deposit: "))
                    acc.deposit(amount)
                except ValueError:
                    print("❌ Please enter a valid number.")
            elif choice == '2':
                acc.get_balance()
            elif choice == '3':
                break
            else:
                print("Invalid input.")
def main():
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
main()

#Solo@-leveling$=cos²x + sin²x