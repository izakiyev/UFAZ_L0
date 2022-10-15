"""
1) The function's signature consists of the function's name, arguments, and variables.
2) The function's docstring is a string that describes the function's functionality.
3) A docstring is a "string literal" that appears as the initial statement of a function made out of a bracketed set of
4) A statement is an instruction that the Python interpreter can execute. A group of statements make
up the function body.
5) A return statements end the execution of the function and sends the result back to the calling
function.
6) None
7) An assert statement check if a condition is true.
8) Both of these calls find the minimum of these values, however in the second call we simultaneously
change the order in which these values are assigned to the parameters of the function.

 """
 #The minimum function and its test programs..
def minimum(elt1, elt2):
    '''
    Return the smaller of the two elements as a parameter.

    : param elt1: the first element.
    : type elt1: any
    : param elt2: the second element.
    : type elt2: any
    : returns: the smaller of the two elements.
    '''
    if elt1 < elt2:
        return elt1
    else:
        return elt2


def test_min():
    '''Tests the minimum of integers.'''
    assert 1 == minimum(1, 2)
    assert -5 == minimum(elt2=-3, elt1=-5)

def test_min_chaines():
    '''Test the minimum of two strings.'''
    assert 'cat' == minimum('cat', 'horse')

if __name__ == '__main__':
    test_min()
    test_min_chaines()
    print('successful tests')