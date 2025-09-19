# EP 6th Time and For Loops Notes

import time

epoch = time.time()
current = time.ctime()
local_time = time.localtime(int(current))
hour = local_time.tm_hour

print(f"it's been: {epoch} seconds since jan 1st 1990")
print(f"The time is: {current}")
print(f"The hour is: {hour}")
