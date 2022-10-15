m2=1
def user():
    """
    This is program which allows 2 people to play
    """
    import random #random library is included
    global m2 #The use of the 'm2'  in function is allowed
    m2+=1
    l=[ [' ',' ','1',' ','2',' ','3',' ','4',' ','5',' ','6',' ','7',' ',' '],#an array is built on the list
        ['6',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','6'],
        ['5',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','5'],
        ['4',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','4'],
        ['3',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','3'],
        ['2',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','2'],
        ['1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'],
        [' ',' ','1',' ','2',' ','3',' ','4',' ','5',' ','6',' ','7',' ',' ']]
    m=6
    n=14
    def visual():#Avaz wrote this function
        ''' Creates empty Connect 4 board '''
        for i in l:#All lists in the "l" list
            m=''
            for j in i:#elements inside lists
                m+=j #elements add to m with ordering
            print(m)
    visual()
    def move():#Ibrahim wrote this function
        '''Adds '*' or '0' to the board'''
        if m2%2==0:#in firs game play with '*' 
            l1=['*','o']
        else:#in next game play with '0'.this period will continue
            l1=['o','*']
        dic={2:0,4:0,6:0,8:0,10:0,12:0,14:0}#created dictionary
        while True:
            if win()==True:
                d=input("Do you want clean table?\n[y/n]->")#permission is required to clean the board
                if d=='y':
                    #the items in the list are deleted
                    for id2 in range(1,7):
                        for id in range(2,14,2):
                            l[id2][id]=' '
                    visual()
                else:
                    break
                rt=input("Do you want play again?[y/n]\n")#the user is asked if he wants to play again
                if rt=="y":
                    connect4()#called connect4 function
                else:
                    break
                break
            #Gular and Ulvi wrote it
            for k in l1:
                #random tips are given
                s=random.choice(['first','second','third','fourth','fifth','sixth','seventh'])
                print(f'You can come to {s} column')
                x=int(input(f'{k}->'))
                #if the line is column, you are warned
                while dic[2*x]>5:
                    print("it is full")
                    x=int(input())
                l[m-dic[2*x]][2*x]=k #'*' or 'o' added to list l.
                dic[2*x]+=1  #2*x key's value increase 1 unit in dictionary
                visual()#The visual function is called to print a new state of the board
                if win()==True:
                    print(f"{k} is winner")
                
                    break
                
    def win():
        '''this function determines the winner'''
        #checks the line.4 If the consecutive element is the same, it returns True
        #Guler wrote it
        for r in range(m,0,-1):
            for c in range(2,n,2):
                if l[r][c] == l[r][c+2] == l[r][c+4] == l[r][c+6] !=' ':
                    return True
         #checks the column.4 If the consecutive element is the same, it returns True
         #Ulvi wrote it
        for c in range(2,n,2):
            for r in range(m,0,-1):
                if l[r][c] == l[r+1][c] == l[r+2][c] == l[r+3][c] !=' ':
                    return True
        #checks the dioganal.4 If the consecutive element is the same in dioganal, it returns True
        #Avaz wrote it
        for c in range(2,5,2):
            for r in range(6,3,-1):
                    if l[r][c]==l[r-1][c+2]==l[r-2][c+4]==l[r-3][c+6]!=' ':
                        return True
        
        #checks the opposite dioganal.4 If the consecutive element is the same in dioganal, it returns True
        #Ibrahim wrote it
        for c in range(14,5,-2):
            for r in range(6,3,-1):
                    if l[r][c]==l[r-1][c-2]==l[r-2][c-4]==l[r-3][c-6]!=' ':
                        return True
    move()


def machine():

    ''' 
    This function is for user and bot play
    '''
    global m2 #The use of the 'm2'  in function is allowed
    import random #random library is included
    m2+=1
    l=[ [' ',' ','1',' ','2',' ','3',' ','4',' ','5',' ','6',' ','7',' ',' '],#an array is built on the list
        ['6',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','6'],
        ['5',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','5'],
        ['4',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','4'],
        ['3',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','3'],
        ['2',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','2'],
        ['1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'],
        [' ',' ','1',' ','2',' ','3',' ','4',' ','5',' ','6',' ','7',' ',' ']]
    m=6
    n=14
    def visual():#Avaz wrote it
        ''' Creates empty Connect 4 board '''
        for i in l:#All lists in the "l" list
            m=''
            for j in i:#elements inside lists
                m+=j #elements add to m with ordering
            print(m)
    visual()
    def move():#Ibrahim wrote it
        '''Adds '*' or '0' to the board'''
        if m2%2==0:#in firs game play with '*' 
            l1=['*','o']
        else:#in next game play with '0'.this period will continue
            l1=['o','*']
        dic={2:0,4:0,6:0,8:0,10:0,12:0,14:0}
        while True:
            if win()==True:
                d=input("Do you want clean table?\n[y/n]->")#permission is required to clean the board
                if d=='y':
                    for id2 in range(1,7):
                        for id in range(2,15,2):
                            l[id2][id]=' '
                    visual()
                else:
                    break
                rt=input("Do you want play again?[y/n]\n")#the user is asked if he wants to play again
                if rt=="y":
                    connect4()#called connect4 function
                else:
                    break
                break
            ai1()
            #Guler and Ulvi wrote it                                                                                                                                                                                                                                       
            for k in l1:
                if k=='o':
                    #if there are 3 '*' v 'or' o 'side by side, the ai1 () function is called or random numbers are selected
                    if ai1()==True :
                        ai1()
                    else:
                        x=random.randint(1,7)
                elif k=='*':
                    #random tips are given
                    s=random.choice(['first','second','third','fourth','fifth','sixth','seventh'])
                    print(f'You can come to {s} column')
                    x=int(input(f'{k}-->'))
                #if the line is column, you are warned
                while dic[2*x]>5:
                    print("it is full")
                    x=int(input()) 
                l[m-dic[2*x]][2*x]=k#'*' or 'o' added to list l.
                dic[2*x]+=1#2*x key's value increase 1 unit in dictionary
                visual()#The visual function is called to print a new state of the board
                if win()==True:
                    print(f"{k} is winner")
                    break
                
    def ai1():#Ibrahim wrote it
        '''this function redirects the bot logically'''
        for c in range(2,n+1,2):
            for r in range(6,2,-1):
                if l[r][c] == l[r-1][c] == l[r-2][c]!=' ' and l[r-3][c]!='o':
                    x=int(c/2)
                    return True 
    def win():
        '''this function determines the winner between user and bot'''
         #checks the line.4 If the consecutive element is the same, it returns True
         #Guler wrote it
        for r in range(m,0,-1):
            for c in range(2,n,2):
                if l[r][c] == l[r][c+2] == l[r][c+4] == l[r][c+6] !=' ':
                    return True
                
         #checks the column.4 If the consecutive element is the same, it returns True
         #Ulvi wrote it
        for c in range(2,n,2):
            for r in range(m,0,-1):
                if l[r][c] == l[r+1][c] == l[r+2][c] == l[r+3][c] !=' ':
                    return True
         #checks the dioganal.4 If the consecutive element is the same, it returns True
         #Avaz wrote it
        for c in range(2,5,2):
            for r in range(6,3,-1):
                    if l[r][c]==l[r-1][c+2]==l[r-2][c+4]==l[r-3][c+6]!=' ':
                        return True
         #checks the opposite dioganal.4 If the consecutive element is the same, it returns True
         #Ibrahim wrote it
        for c in range(14,5,-2):
            for r in range(6,3,-1):
                    if l[r][c]==l[r-1][c-2]==l[r-2][c-4]==l[r-3][c-6]!=' ':
                        return True
   
    
    move()
#Ibrahim wrote it
def connect4():
    '''
    allowed to start the game.With bot or user
    '''
    x5=input("Which one do you want?Play with friend(f) or machine(m)?\n[f/m]->")#the user is asked if he wants to play with the machine or the user  
    if x5== 'f':
        user()
    elif x5=='m':
        machine()
connect4()