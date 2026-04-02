import time

#sets: curly braces {}
#tupple: brackets ()
#list: square brackets[]

Questions = (
    "1. Who is the President of Cameroon?",
    "2. Who is the President of France?",
    "3. Who is the President of China?",
    "4. Who is the President of Congo?",
    "5. Who is the President of the USA?"
)

Choices = (
    ("A. Ahidjo", "B. Biya", "C. Kamto"),
    ("A. Degaul", "B. Macron", "C. Lepen"),
    ("A. Ping", "B. Lee", "C. Eboule"),
    ("A. Trraoue", "B. Bongo", "C. Assan"),
    ("A. Haris", "B. Beiden", "C. Trump")
)

Answers = ("B", "B", "A", "A", "C")

score = 0
T = 5

for i in range(len(Questions)):
    print("----------------------------------")
    print("\n" + Questions[i])
    print("----------------------------------")
    
    for option in Choices[i]:
        print(option,end=" ")
        
    user_answer = input().upper()
    
    if user_answer == Answers[i]:
        print("Correct!!")
        score += 10
    else:
        print(f"Wrong Answer! The correct answer is {Answers[i]}")
    time.sleep(1)  # Optional: adds a short pause between questions

print(f"Final score: {score}/{len(Answers)*10}")
