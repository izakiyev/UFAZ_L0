# voluntarily, no comments or significant identifiers
# voluntarily, the identifiers are insignificant.

def prog1():
    for n in range(0, 9):
        if n % 2 == 0:
            print(n, 'divisible by 2')
        if n % 3 == 0:
            print(n, 'divisible by 3')

def prog2():
    for n in range(0, 9):
        if n % 2 == 0:
            print(n, 'divisible by 2')
            if n % 3 == 0:
                print(n, 'divisible by 3')

def prog3():
    for n in range(0, 9):
        if n % 2 == 0:
            print(n, 'divisible by 2')
        elif n % 3 == 0:
            print(n, 'divisible by 3')

print('prog1 :')
prog1()

print('prog2 :')
prog2()

print('prog3 :')
prog3()
"""
Program 1 prints numbers divisible by 2 and 3 in the range 0-9. 

Program 2 prints numbers divisible by 2 and 2 as well as 3 in range 0-9.

Program 3 prints numbers divisible by 2 and only by 3 in range 0-9.

"""