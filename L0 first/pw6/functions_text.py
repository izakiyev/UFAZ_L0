
def number_differents_characters(text):
    '''
    number of differents characters in a given text.

    :param text: text to analyse
    :type text: str
    :return: number of differents characters
    :type: int
    '''
    l=[]
    for i in text:
        if i not in l:
            l.append(i)
    return len(l)
    assert isinstance(text, str)
    pass
text=input()
print(number_differents_characters(text))

def number_words(text):
    '''
    number of words in a text.
    
    It is assumed that these are the spaces that allow words to be recognized. 
    The words are between spaces.

    :param text: text to analyse
    :type text: (str)
    :return: number of words in a text
    :type: (int)
    '''
    l=text.split(' ')
    l1=[]
    for k in l:
        if k!='':
            l1.append(k)
    return len(l1)
    assert isinstance(text, str)
    pass
text=input()
print(number_words(text))


def number_words_differents(text):
    '''
    number of differents words in a text.
    
    It is assumed that these are the spaces that allow words to be recognized. 
    The words are between spaces.

    :param text: text to analyse
    :type text: str
    :return: number of differents words in a text
    :type: (int)
    '''
    l=text.split(' ')
    for k in l:
        if k=='' or k==' ':
            l.remove(k)
    for i in l:
        c=l.count(i)
        if c>=2:
            l.remove(i)
    for k in l:
        if k=='' or k==' ':
            l.remove(k)
    return len(l)
    assert isinstance(text, str)
    pass
text=input()
print(number_words_differents(text))
