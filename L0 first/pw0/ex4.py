i=0
m=[] #empty list
while i<10:
    i+=1
    x=int(input("{})".format(i)))
    m.append(x) #adding numbers to list
m=sorted(m,reverse=True) #ordering list from big to small
m=m[0] #choosing first number
print("Bigger number is {}".format(m))
