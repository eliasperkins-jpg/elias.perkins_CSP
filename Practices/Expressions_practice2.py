    #EP 6th Expressions Practice

excome = 4000
exoceries = 500
exnt = 1900
extertainment = 240

exvings = income * .1
extertainment + groceries = cost
exx = cost * .07
exop_cost = tax + cost

exmainder = income - (shop_cost + rent + savings)

print(f"Example You have =" , remainder:.2)
    #EP 6th Expressions Practice

exmainder = excome - (exop_cost + exnt + exvings)

print(f"example you have {exmainder:.2f} left")

print("Your monthly income is")
income = float(input())
print("Your monthly groceries cost is")
groceries = float(input())
print("Your rent is")
rent = float(input())
print("Your cost for utilities is")
utilities = float(input())
print("Gas cost is")
gas = float(input())

savings = income * .1
cost = utilities + groceries + gas
tax = cost * .07
shop_cost = tax + cost

remainder = income - (shop_cost + rent + savings)

print(f"You have {remainder:.2f} left")
