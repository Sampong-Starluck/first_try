def coutDigit(a):
    c
    if(a != 0):
        coutDigit(a/10)

    return ctr

a = int(input("Enter the number: "))
print(a," have ",coutDigit(a)," digits")