from functions_text import *

def test_number_differents_characters():
    assert 4 == number_differents_characters('hello')
    assert 1 == number_differents_characters('ooooooooooo')
    assert 2 == number_differents_characters('abaabaabaabaaba')
    assert 0 == number_differents_characters('')


def test_number_words():
    assert 3 == number_words('simple text here')
    assert 3 == number_words('how many words?')
    assert 7 == number_words(' a b c   d   e f g ')
    assert 7 == number_words(' a b c   d   a b c ')
    assert 0 == number_words('')


def test_number_words_differents():
    assert 3 == number_words_differents('simple text here')
    assert 3 == number_words_differents('how many words?')
    assert 3 == number_words_differents('dog cat bird')
    assert 7 == number_words_differents(' a b c   d   e f g ')
    assert 4 == number_words_differents(' a b c   d   a b c ')
    assert 0 == number_words_differents('')
test_number_words_differents()
test_number_words()
test_number_differents_characters()