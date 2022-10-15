x=input() 
l=[] 
for i in x:
    l.append(i)
k='' 
for t in range(1,len(l)+1):
    b=len(l)-t
    k+=l[b]
print(k)



