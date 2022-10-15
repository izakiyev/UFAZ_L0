def falsetrue():
    l=[]
    k=[]
    for i in range(0,8):
        x=int(input("Enter number:"))
        if x%2==0:
            l.append(x)
        else:
            k.append(x)
    if len(k)!=0 and len(l)==0:
        print(True)
    else:
        print(False)
falsetrue()

    



