def coutDigit(a):
    if(a != 0):
        ctr ++
        coutDigit(a/10)

    return ctr

a = int(input("Enter the number: "))
print()