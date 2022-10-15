import random
x = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"
l = []
d = ''
for j in x:
    l.append(j)
y = int(input("Enter number:"))
for i in range(0, y):
    r = random.randint(0, len(l) - 1)
    d += l[r]
print(d)

