x=int(input())
n=x
li=[]
for i in str(x):
    li.append(int(i))
j=0
m=0
while j<len(li):
    j+=1
    t=x%10
    x=(x-t)/10
    k=t**4
    m+=k
if int(m)==n:
    print("It’s Armstrong number")
else:
    print("It is NOT Armstrong number.")

