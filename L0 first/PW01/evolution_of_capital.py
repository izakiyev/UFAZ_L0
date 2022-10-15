import math #for importing math function
def evolution_of_capital():
    x=float(input("Intial capital="))#initial capital is included
    y=float(input("Interest rate="))#Interest rate is included
    z=float(input("Investment period="))#Investment period on included
    i=0
    while i<z:
        i+=1
        s=x*(1+(y/100))**i   
        print(i,"Year capital={}  |   Acquired capital={}".format(s,s-x))
    z=math.log(2,1+(y/100))
    print("After {} years, the capital will double".format(z))
        
evolution_of_capital() ## run the program evolution_of_capital



