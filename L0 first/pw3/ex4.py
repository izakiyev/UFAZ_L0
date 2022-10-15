def prog1(a):
    """This function print perfect numbers in terminal which number is equal to the sum of the divisors of the number
    For example:6=1+2+3 28=2+4+7+14
    """
    for b in range(2,a+1):#choose number in range (2,a+1)
        sum=0 #it shows the sum of the divisors of the number
        for i in range(1,b):
            if b%i==0: #All numbers from 1 to b are checked for division by b,     
                sum+=i   # and integers that are completely divisible are added to sum.
        if sum==b: #if the selected number is equal to the divisor of the number
            print(f"{sum} is perfect number")#b or sum is printed
def prog2(a):
    """This function print friend numbers in terminal which numbers N and M are said to be friends if the sum of the divisors of M (excluding M itself) is equal to N and the sum of the divisors of N (excluding N itself) is equal to M.
     For example, 220 and 284 are friends. Indeed, the sum of the divisors of 220 out of 220 is
1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284 and the sum of the divisors of 284 excluding 284 is 1 + 2 + 4 + 71 + 142 = 220."""
    print("Wait please...")
    for k in range(2,a+1):
        sum1=0 #it shows the sum of the divisors of the number
        for i in range(1,k):
            if k%i==0: #All numbers from 1 to k are checked for division by k,  
                sum1+=i # and integers that are completely divisible are added to sum1.
        for t in range(k,a+1):
            sum2=0 #it shows the sum of the divisors of the number
            for j in range(1,t):
                if t%j==0: #All numbers from 1 to t are checked for division by t, 
                    sum2+=j # and integers that are completely divisible are added to sum2.
            if t==sum1 and sum2==k and t>k: #if the sum of the divisors of first number equal to second number and the sum of the divisors of second number is equal to first number and first number is not equal to second number 
                print(f"{k} and {t} are friend numbers") #first(k) and Second(t) numbers are printed
def prog():
    a=int(input("Enter Number:"))
    #they work function
    prog2(a)
    prog1(a)
prog()






