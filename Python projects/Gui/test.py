import tkinter as tk
from tkinter import messagebox

class BankAccount:
    def __init__(self, holder, number):
        self.account_holder = holder
        self.account_number = number
        self.balance = 0.0

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            return True
        return False

    def withdraw(self, amount):
        if 0 < amount <= self.balance:
            self.balance -= amount
            return True
        return False

    def get_balance(self):
        return self.balance

# ---- Tkinter GUI ----

class BankApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Simple Bank App")
        self.user = None

        # --- UI Widgets ---
        self.name_label = tk.Label(root, text="Enter your full name:")
        self.name_label.pack()

        self.name_entry = tk.Entry(root)
        self.name_entry.pack()

        self.acc_label = tk.Label(root, text="Enter account number:")
        self.acc_label.pack()

        self.acc_entry = tk.Entry(root)
        self.acc_entry.pack()

        self.create_btn = tk.Button(root, text="Create Account", command=self.create_account)
        self.create_btn.pack()

        self.balance_btn = tk.Button(root, text="Check Balance", command=self.show_balance, state=tk.DISABLED)
        self.balance_btn.pack()

        self.deposit_entry = tk.Entry(root)
        self.deposit_entry.pack()
        self.deposit_entry.insert(0, "Amount to deposit")

        self.deposit_btn = tk.Button(root, text="Deposit", command=self.deposit_money, state=tk.DISABLED)
        self.deposit_btn.pack()

        self.withdraw_entry = tk.Entry(root)
        self.withdraw_entry.pack()
        self.withdraw_entry.insert(0, "Amount to withdraw")

        self.withdraw_btn = tk.Button(root, text="Withdraw", command=self.withdraw_money, state=tk.DISABLED)
        self.withdraw_btn.pack()

    def create_account(self):
        name = self.name_entry.get()
        try:
            acc_num = int(self.acc_entry.get())
            self.user = BankAccount(name, acc_num)
            messagebox.showinfo("Success", f"Account created for {name}")
            self.enable_buttons()
        except ValueError:
            messagebox.showerror("Error", "Account number must be a number!")

    def show_balance(self):
        if self.user:
            balance = self.user.get_balance()
            messagebox.showinfo("Balance", f"Your balance is ${balance}")

    def deposit_money(self):
        try:
            amount = float(self.deposit_entry.get())
            if self.user.deposit(amount):
                messagebox.showinfo("Deposited", f"${amount} deposited!")
            else:
                messagebox.showwarning("Invalid", "Enter a valid amount!")
        except ValueError:
            messagebox.showerror("Error", "Please enter a numeric amount.")

    def withdraw_money(self):
        try:
            amount = float(self.withdraw_entry.get())
            if self.user.withdraw(amount):
                messagebox.showinfo("Withdrawn", f"${amount} withdrawn!")
            else:
                messagebox.showwarning("Insufficient", "Not enough balance or invalid amount.")
        except ValueError:
            messagebox.showerror("Error", "Please enter a numeric amount.")

    def enable_buttons(self):
        self.balance_btn.config(state=tk.NORMAL)
        self.deposit_btn.config(state=tk.NORMAL)
        self.withdraw_btn.config(state=tk.NORMAL)

# Run the GUI
root = tk.Tk()
app = BankApp(root)
root.mainloop()

