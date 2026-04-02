import tkinter as tk
from tkinter import messagebox

def greet():
    name = entry.get()
    messagebox.showinfo("Greeting", f"Hello, {name}!")

root = tk.Tk()
root.title("Greeting App")

entry = tk.Entry(root)
entry.pack()

button = tk.Button(root, text="Greet Me", command=greet)
button.pack()

root.mainloop()
