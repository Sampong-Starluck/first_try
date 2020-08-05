def coutDigit(a):
    ctr = 1
    if(a != 0):
        ctr += 1
        coutDigit(a/10)
    else:
        return 0

    return ctr

a = int(input("Enter the number: "))
print(a," have ",coutDigit(a)," digits")