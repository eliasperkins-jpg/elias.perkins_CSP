#EP 6th Old Enough LaRose

Name = input("What is your name?\n")

Age = int(input("How old are you?\n"))

if Age >= 18:
    print("You can vote!")
elif Age >= 16:
    print(f"You can get a driver's license!")
elif Age >= 15:
    print(f"You can get a learner's permit!")
elif Age >= 4:
    print(f"You can go to school!")
else:
    if Age < 4:
        print(f"GET OFF OF THE COMPUTER BILLY!")

    