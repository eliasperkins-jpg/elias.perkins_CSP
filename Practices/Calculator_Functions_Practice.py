    #EP 6th Expressions Practice

def calculate(type):
    print(f"Your monthly {type} is")
    return float(input())
def add(type):
    print(f"You're calculating tax for {type}")
    return float(input())

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

income = calculate("income")
groceries = calculate("groceries")
rent = calculate("rent")
utilities = calculate("utilities")
gas = calculate("gas")

gtax = add("groceries")
rtax = add("rent")
utax = add("utilities")
gatax = add("gas")

savings = income * .1


remainder = income - (gtax + rtax + utax + gatax)

print(f"You have {remainder:.2f} left")