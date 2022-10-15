def palindrome():
    x=input("Enter word:").upper()
    l=[]
    for i in x:
        l.append(i)
    if l==l[::-1]:
        return True
    else:
        return False
print(palindrome())