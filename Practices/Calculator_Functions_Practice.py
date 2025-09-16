    #EP 6th Expressions Practice



excome = 4000
exoceries = 250
exnt = 1900
exilities = 580
exs = 160

exvings = excome * .1
exst = exilities + exoceries
exx = exst * .07
exop_cost = exx + exst

exvings = excome * .1
exst = exilities + exoceries + exs
exop_cost = exs + exst

exmainder = excome - (exop_cost + exnt + exvings)

print(f"example you have {exmainder:.2f} left")

def calculate(solution):
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