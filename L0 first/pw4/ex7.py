from typing import Sequence, Any, Optional, get_args

def frequency(sequence: Sequence, element: Any) -> int:
    '''Get the frequency (the number of occurrences) of an element in asequence.
     : param sequence: the sequence in which the element must be counted
     : param element: the element whose frequency we want to obtain
     : return: the frequency of the element in the sequence
    '''
    x=list(sequence) #string 'sequence' convert to list
    c=x.count(element) #counting number of 'element' in x
    return c


def test_frequency():
    # Tests
    assert frequency('texts', 'e') == 1
    assert frequency('texts', 'a') == 0
    assert frequency('texts', 's') == 1
    assert frequency('texts', 't') == 2
    # limit tests
    assert frequency('ttt', 't') == 3
    assert frequency('', 'x') == 0

    print('test_frequency: ok')


def contain(a: Sequence, b: Any) -> bool:
    '''
    Know if an element is present or not in a sequence.

     : param a: the sequence in which the element is searched
     : param b: the element sought
     : return: True if the needle is in the grinding wheel
    '''
    if b in a: #if b is in list a
        return True
def test_contain():
    assert contain('l texts', 'e')
    assert contain('l texts', 'x')
    assert contain('l texts', 's')
    assert contain('l texts', 't')
    assert contain('l texts', 'l')
    assert not contain('l texts', 'a')
    assert not contain('l texts', '7')
    assert not contain('', 'x')

    print('test_contain: ok')



def index(a: Sequence, b: Any, beginning: int) -> Optional[int]:
    '''
    Get the index of the first occurrence of an element, the needle, in
     a sequence, the grindstone, from a given index.

     If the item is not found, No is returned.

     : param a: the sequence in which the element is searched
     : param b: the element sought
     : param beginning: the index from which the search begins
     : return: The index of the first occurrence of the needle in the grinding wheel at
     from index start or None if not found
    '''
    l=list(a)
    l=l[beginning:]
    try:
        k=l.index(b)+beginning
    except ValueError:
        return None
    return k
        
def test_index():
    # Tests nominaux
    assert index('texts', 'e', 0) == 1
    assert index('texts', 's', 0) == 4
    assert index('texts', 't', 0) == 0
    assert index('texts', 't', 1) == 3
    assert index('texts', 't', 3) == 3
    assert index('texts', 't', 4) == None

    # Tests aux limites
    assert index('ttt', 't', 0) == 0
    assert index('texts', 'a', 0) == None
    assert index('texts', 't', 40) == None
    assert index('', 'x', 0) == None

    print('test_index: ok')


if __name__ == '__main__':
    test_frequency()
    test_contain()
    test_index()