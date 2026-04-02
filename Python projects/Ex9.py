import Ex7
def days_of_Week(day):
    match day: #Match:case operator; used to avoid many elif statements; just like a swithc in c++
        case 1:#Can also be used to switch srtings
            return "Its Monday"
        case 2:
            return "It's Tuesday"
        case 3:
            return "It's Wednesday"
        case 4:
            return "It's Thursday"
        case 5:
            return "It's Friday"
        case 6:
            return "It's Saturday"
        case 7:
            return "It's Sunday"
        case _:
            return "Invalid day"
        
User = int(input("Enter a number(1-7): "))
print(days_of_Week(User))

Ex7.is_palindrome()
