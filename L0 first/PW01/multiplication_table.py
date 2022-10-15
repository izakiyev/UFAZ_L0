def multiplication_table():#function
    import random #for importing random function
    import time #for importing time function
    i=0
    m=0 #m indicates the number of correct answers
    while True:
        x=int(input("Enter number-")) #for entering number
        print("Questions will be asked in 3 seconds.Be ready!")
        time.sleep(3) #for stoping 3 seconds
        begin=time.time()#start time
        #The part of the questions asked
        while i<10:
            i+=1
            num=random.randint(1,10) #chooses random number in range 1-11
            n=int(input("{}){} x {} =".format(i,x,num)))
            if  n==num*x:
                m+=1 #if the answer is correct, m  increases by one
        end=time.time()#expiration time
        print(f"Time Spent- {end - begin}")#prints the time spent from the beginning to the end of the program
        #Evaluation part of the program
        if m==10:
            print("Excelent")
        elif m==9:
            print("Very good")
        elif m==7 or m==8:
            print("Good")
        elif m==5 or m==6 or m==4:
            print("Avarage")
        elif 0<m<4:
            print("You should rework this table")
            print("Do you want rework.yes or no")
            p=input("->")
            if p=="yes":
                multiplication_table()
            elif p=="no":
                break
        else:
            print("You must rework this table")
            multiplication_table()
        break
multiplication_table()## run the program multiplication_table
        

