from re import A


#階乘
def factorial(x):
    ans = 1
    for i in range(1, x+1):
        ans = ans*i
    return ans

a = int(input(">> "))
print (factorial(a))