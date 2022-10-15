import math
def exercise5():
    𝜙 = 0.5
    𝜸 = 1.4
    a=2*𝜸/(𝜸-1)
    b=(1+a-𝜙**2)**2-4*𝜙**2*(a-1)
    pl=(1-((1+a-𝜙**2-math.sqrt(b)))/(2*𝜙**2*(a-1)))**(a/2) 
    print("P/Pt={}".format(pl))

exercise5()