# voluntarily, no comments or significant identifiers
def main():
    print('start')
    x = 0
    while x < 3:
        print(x)
        if x == 1:
            print('1')
        x += 1
    print("end")
 


main()
"""
on line 4,it was x==0,but it is not correct.We want to assign 0 to x.The assignment operator is =.It is syntax error.

on line 4,it was x=0;,but it is not correct.We must not write cemicolon after 0 in python.It is syntax error.

on line 5,it was x<3,but it is not correct.We must write colon after 3 in python.It is syntax error.

on line 7,it was x=1,but it is not correct.We must write x==1.We want to equalize them each other.It is syntax error.

on line 7,it was x==1,but it is not correct.We must write colon after 1 in python.It is syntax error.

on line 10,it was print(end),but it is not correct.We must write the word end in quotation marks.It is syntax error.

on line 14,it was main,but it is not correct.We must write main() for the function to work.It is syntax error.

"""