def coutDigit(a):
    if a < 10:
        return 1
    else:
        return 1 + coutDigit(a/)

a = int(input("Enter the number: "))
print(a," have ",coutDigit(a)," digits")