def areyousure():
    print("Are you sure? y/n")
    t = input("->")
    if t == "n" or t == "N":
        game()
    else:
        print("See you next time")

z = """
If you choose 1,you will be user1.User1 find number which program has choosen
İf you choose 2,you will be user2.User2 redirects the program, 
thus the use of the symbols ">" "<" "=" helps the program to find numbers.
"""
import random


def game():
    mash_ans=[]
    user_ans=[]
    print(z)
    print("Which one do you want to choose? 1/2")
    j = input("-")
    if j == "1":
        x = random.randint(1, 999)#chosing in range 1-1000
        print("Do you want start n/y")#giving question to user for start
        n = input("->")#the user input answer

        def ifelse():
            if n == "y" or n == "Y":#if the user chooses y the program will start
                m = 0 #for number of tries
                #Game is started
                while True:
                    y = int(input("Number-"))
                    if y == 0:#if user input 0 the program will stop
                        print("Are you sure? y/n") #the user is asked if he is sure
                        b = input("->")
                        if b == "y" or b == "Y":#if the user writes y or Y the program will stop
                            print("The Game was stopped")
                            break
                        elif b == "n" or b == "N":#if the user writes n or N the program start again but from where he stoped
                            ifelse()
                        #part of the program which directs user
                    elif x > y:
                        print("s")
                        m += 1
                    elif x < y:
                        print("b")
                        m += 1
                    elif x == y:
                        print("f")
                        m += 1
                        break
                    else:
                        ifelse()
                print("Number of tries={}".format(m))
                print("Do you want play again? n/y")#the user is asked to play again
                ans = input("-")
                if ans == "y":
                    game()
                elif ans == "n":
                    areyousure()
            elif n == "n" or n == "N":
                areyousure()
            else:
                print("You have 2 choice.y and n")
                game()

        ifelse()
    elif j == "2":
        print("Do you want start n/y")
        n = input("->")

        def ifelse():
            if n == "y" or n == "Y":
                m = 0 #for number of tries
                l = 999
                k = 1
                while True:
                    x = random.randint(k, l)
                    print(x)
                    mash_ans.append(x)
                    #part of the program which user directs the program
                    v = input("-")
                    user_ans.append(v)
                    if v == ">":
                        l = x - 1
                        m += 1
                    elif v == "<":
                        k = x + 1
                        m += 1
                    elif v == "=":
                        m += 1
                        print("Number was found")
                        break
                    if v == "0":
                        print("Are you sure? y/n")
                        b = input("->")
                        if b == "y" or b == "Y":
                            print("See you next time")
                            break
                        elif b == "n" or b == "N":
                            ifelse()
                    #if user cheats The program will find it. 
                    if k > l:
                        c = int(input("Please enter your number which you have chosen-"))
                        print("YOU ARE CHEATING")
                        #the program determine user's cheating step
                        q=0
                        while q<m:
                            if mash_ans[q]>c and mash_ans[q+1]>c and mash_ans[q+1]>mash_ans[q]:
                                if user_ans ==">":
                                    print(f"In try #{q+1},you cheated because,this {user_ans[q]} symbol must be < symbol")
                                else:
                                    print(f"In try #{q+1},you cheated because,this {user_ans[q]} symbol must be > symbol")
                                break
                            elif mash_ans[q]<c and mash_ans[q+1]<c and mash_ans[q+1]<mash_ans[q]:
                                if user_ans ==">":
                                    print(f"In try #{q+1},you cheated because,this {user_ans[q]} symbol must be > symbol")
                                else:
                                    print(f"In try #{q+1},you cheated because,this {user_ans[q]} symbol must be < symbol")
                                break
                            elif mash_ans[q]==c or mash_ans[q+1]==c:
                                print(f"In try #{q+2},you cheated because,this {user_ans[q+1]} symbol must be = symbol")
                                break
                            else:
                                q+=1
                        break
                print("number of tries={}".format(m))
                print("Do you want play again? n/y")#the user is asked to play again
                ans = input("-")
                if ans == "y":
                    game()
                elif ans == "n":
                    areyousure()
            elif n == "n" or n == "N":
                areyousure()
            else:
                print("You have 2 choice.y and n")
                game()

        ifelse()


game()



