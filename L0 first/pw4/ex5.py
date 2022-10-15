x='eiouaEAIOU'
z='qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNMU'
c='1234567890!@#$%^&*()_+=-Ⅶ<>?:""{/}"/*-`~|\;,./[];'
while True: #
    y=input("Enter character:") #for enter element
    t=list(y) #changed to list which we enter
    if len(t)==1: #if length of element equal to 1 program will work
        def vowel(x):
            "the function which find it is vowel "
            for i in x:
                if y==i: #if the element we entered is in the string 'x', it is a vowel.
                    print( "it is vowel")
        def consonant(z):
            " the function which find it is consonant"
            for i in z:
                if i==y: #if the element we entered is in the string 'z', it is a consonant.
                    print('it is consonant ')
        def other_character(c):
            " the function which find it is other character"
            for k in c: #if the element we entered is in the string 'c', it is a other character.
                if k==y:
                   print('it is other character ')
    else:
        print("it must be element of length 1")
    other_character(c)
    consonant(z)
    vowel(x)






