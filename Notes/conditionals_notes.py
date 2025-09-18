#EP 6th Conditionals Notes

num = 24

#if num < 10: #Boolean Statement Condition
    #print(f"{num} is a single digit number")
#else:
    #print(f"{num} is not a single digit number")
#if num < 100:
    #print(f"{num} is a two or less digit number")

    # == is equal, to < is less, > is more, <= less than or equal to, >= is more than or equal to, ! = NOT EQUAL

name = input("Please tell us your name.")

if name == "LaRose":
    print("You are the teacher")
elif name == "Tia":
    print("you are the TA")
else:
    if name == "Lucas":
        print("You are in 7th period")
    print(f"Hello {name}, you are a student!")

#AND OR & NOT
if num > 0 and num < 10:
    print(f"{num} is a single digit number")
elif num < 25 or num == 50:
    print(f"Wow!! {num} is a cool number bruh")
elif not num < 100:
    print(f" {num} is a large number")
else:
    print(f"You typed in {num}")