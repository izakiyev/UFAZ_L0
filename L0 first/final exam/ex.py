x=open('myData.txt','w')
for i in range(10):
    x.write('Final exam\n')
with open("myData.txt") as x:
    with open("final.txt", "w") as y:
        i=0
        for j in x:
            if i==5:
                break
            y.write(j)
            i+=1
x.close()
y.close()