# EP 6th Time and For Loops Notes

import datetime

current = datetime.datetime.now()
#local_time = time.localtime(int(current))
hour = current.hour

#print(f"it's been: {epoch} seconds since jan 1st 1990")
print(f"The time is: {current}")
print(f"The hour is: {hour}")

#lists

siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]

print(siblings)
#"Alex", "Katie", "Andrew", "Vienna", "Treyson", "Tia", "Treyson", "Xavier", "Jake"] WE DON'T WANT THIS

print(siblings[3])

print(siblings)
siblings[4] = "Tia"
siblings.remove("Vienna")
print(siblings)