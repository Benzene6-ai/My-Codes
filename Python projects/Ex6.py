def create_Name(first,last):  #def = to create a function
    first = first.capitalize()
    last = last.capitalize()
    return first + " " + last
choice = input("Enter your first name: ")
choice2 = input("Enter your second name: ")

full_name = create_Name(choice,choice2)

print(f"Your full Name is: {full_name}")

def add_numbers(*args):# *args(arguments) ; permits to add many arguments in a function
    total = 0
    for elemennt in args:
        total+=elemennt
    return total
print(f"The sum is: {add_numbers(1,3,4,5)}")

def integrate(**kwargs):# **kwargs(keywoard-arguments) ; enable to pass multiple keywoardarguments
    for key,value in kwargs.items():#.items for all the elements, .values for the values(katto str etc), .keys for the keys(street,hausnumber etc)
        print(f"{key} : {value}")

integrate(street = choice,    #Dictionary structure
          hausnumber = "8",
          town = "Nürnberg")

def show_address(*args,**kwargs): # *args always come before **kwargs. *args and **kwargs can be passed into the same function
    for arg in args:
        print(arg,end=" ")
    print()
    for key,value in kwargs.items():
        print(f"{key} :  {value}")
    
show_address("DR EBOULE", "Michel Talla",
            Street = "Katto str",    
            Hausnumber = "8",
            Town = "Nürnberg")
