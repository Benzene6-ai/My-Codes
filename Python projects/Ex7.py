def is_palindrome():
    running = False
    while not running:
        store1 = []
        store2 = []
        user = input("Enter a word or a phrase to check if it's a Palindrome: ").lower()
        user1 = [x for x in user if x != " "]#List comprehension: a concise way to create lists in python
                                                  #compact and easier to read than traditional loops
        for char in user1:                        #syntax: ['expression to be returned' for 'value' in 'iterable' if 'condition' ]
            store1.append(char)                   #for every x in user, if x is not an empty space , return x

        for ch in reversed(user1):
            store2.append(ch)

        if store1 == store2:
           running = True
           print(f"{user} is a Palindrome \U0001F601 ✅")
        else:
           running = False
           print(f"{user} is not a Palindrome ❌")

is_palindrome()
