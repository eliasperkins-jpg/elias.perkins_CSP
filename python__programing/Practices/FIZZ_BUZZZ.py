#EP 6th LaRose FIZZ BUZZZ

i = 1

while i < 51:
    if i % 3 ==0 and i % 5 == 0:
        print(f"{i} FIZZ BUZZZ")
    elif i % 3 == 0:
        print(f"{i} FIZZ")
    elif 1 % 5 == 0:
        print(f"{i} is BUZZZ")
    else:
        print(i)

    i += 1