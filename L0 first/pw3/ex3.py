def sum(a):
    """This function returns the sum of range (1,a)"""
    i=0
    t=0 #it shows the sum of the range(0,a)
    while i<a:
        i+=1
        t+=a
    return t
def mult(a,n): 
    """This function returns the mult of range (1,n-2)"""
    i=0
    t=1 #it shows the mult of the range(0,a)
    while i<n-2:
        i+=1
        t*=a
    return t
def pow(a,n): 
    """This function returns the mult of func of sum and mult"""
    assert (a**n)==mult(a,n)*sum(a) ,"it is not true"
    return mult(a,n)*sum(a)
a=int(input("Number:"))
n=int(input("Power:"))
print("Answer:",pow(a,n))
