rate = 0.15
principal = 2400
iprincipal = principal
time = 1
peryear = principal + 600
resttime = 0

print("Starting balance is", principal)

for i in range(0, time):
    amount = principal + principal * rate
    principal = amount
    print("Balance amount after", i+1, "year is", amount)
    if i != time-1:
        principal = principal + peryear
        a=peryear
        print("Adding to pricipal for next year", peryear)
        peryear = peryear + 600
        print("New principal after", i+1, "year is", principal)
        
expenditure = 0
print("In indian money: ", amount*85)
print("Total amount put in is", iprincipal)

for j in range(0, resttime):
    if j < resttime:
        amountten = principal + principal * rate
        amount = amountten
        print("Balance amount after", j+1+time, "year is", amount)

    print("In indian money:", amount*85)

print("Profit is", amount - iprincipal)