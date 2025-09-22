# EP 6th Time and For Loops Notes

import datetime

current = datetime.datetime.now()
#local_time = time.localtime(int(current))
hour = current.hour

#print(f"it's been: {epoch} seconds since jan 1st 1990")
print(f"The time is: {current}")
print(f"The hour is: {hour}")

#lists

siblings = ["dragofruity", "corny", "coconuffin", "banananananananana", "oran", "appeling", "grapebomb", "tangyrine", "lomony", "grapfrut"]

print(siblings)
#["dragofruity", "corny", "coconuffin", "banananananananana", "oran", "appeling", "grapebomb", "tangyrine", "lomony", "grapfrut"] WE DON'T WANT THIS

print(siblings[3])

print(siblings)
siblings[4] = "oran"
siblings.remove("banananananananana")
print(siblings)

#for loop
for sibling in siblings:
    #print(f"Hello {sibling}")
    print("EAT")

for x in range(20, -11, -1):
    print(x)

#while loops
#infinite loops
#while true:
#   print("OH NO")  THIS WILL MELT HARD DRIVE

#Good While Loop
i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

    import random

    number = random.randint(1,20)
    x = 1
    """while x != number:
        print("Ducky")
        x += 1


    print("Goose!")"""

while True:
    if number == x:
        print("goose")
        break
    else:
        print("DUCKY")
        x +=1