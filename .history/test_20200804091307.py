# def coutDigit(a):
#     if a < 10:
#         return 1
#     else:
#         return 1 + coutDigit(a/10)

# a = int(input("Enter the number: "))
# print(a," have ",coutDigit(a)," digits")

# def prime(a):
#     ctr = 0
#     for i in range(2,round(a/2)):
#         if a % i == 0:
#             ctr += 1
#             break
#     return ctr

# a = int(input("Enter the number: "))
# #a = 12
# if prime(a) == 1:
#     print("This number is not a prime number.")
# else:
#     print("This number is a prime number.")

def recur_fibo(a):
    if a <= 1:
        return a
    else:
        return (recur_fibo(a - 1) + recur_fibo(a - 2))
        
num = int(input("Enter the number: "))
if num <= 0:
    print("Please enter the natural number !!!!")
else:
    