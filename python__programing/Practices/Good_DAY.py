#EP 6th GOOD DAY LaRose

import datetime

current = datetime.datetime.now()
hour = current.hour
hour_of_day = (f"the current hour in military is {hour}")

if hour <= 1:
    print("GO TO BED YOU CRETIN ITS ONE OCLOCK")
elif hour < 6:
    print("Go to bed please its too early")
elif hour <= 10:
    print("Good Morning")
elif hour <= 14:
    print("Good Noon to You")
elif hour <= 17:
    print("It's afternoon get ready to hit the hay in a couple of hours")
elif hour <= 21:
    print("Evening is here")
else:
    print("Good Night.")