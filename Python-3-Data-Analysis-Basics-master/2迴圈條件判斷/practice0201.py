#猜數字
import random
num = random.randint(1, 101)
print ("猜一個數字")
ans = 0
while (ans != num):
    ans = int(input(">> "))
    if (ans > num):
        print ("大了，再猜一次")
    else:
        print ("小了，再猜一次")
    
print ("對了")