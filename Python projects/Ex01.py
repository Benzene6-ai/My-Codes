running = False
while not running:
 choice = int(input("\nWhat do you want to do ?\n" \
                   "1.List Even numbers\n" \
                   "2.List Odd numbers\n"
                   "3.List Prime numbers\n"
                   "4.Quit\n"))
 if choice == 1:
  print("Enter a limit: ")
  limit = int(input())

  print(f"Even Numbers upto {limit} are: ")
  for i in range(limit):
    if i % 2 == 0:
        print(i,end=" ")

 elif choice == 2:
    print("Enter a limit: ")
    limit = int(input())

    print(f"Odd Numbers upto {limit} are: ")
    for i in range(limit):
      if i % 2 != 0:
        print(i,end=" ")

 elif choice == 3:
    print("Enter a limit: ")
    limit = int(input())

    print(f"Prime Numbers upto {limit} are: ")
    for n in range(2,limit + 1):
       is_prime = True
       for i in range(2, int(n**0.5)+1):
          if n % i == 0:
             is_prime = False
             break
       if is_prime:
          print(n,end=" ")  

 elif choice == 4:
   running = True 

 else:
   print("Invalid Input")

   
