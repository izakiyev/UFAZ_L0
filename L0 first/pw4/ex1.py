s=[9, 1, 5, 2, 1 , 3] # Initialize a name s with a list containing in order 9, 1, 5, 2, 1 and 3
print(len(s)) # Get the size of the list s (the number of elements it contains)

if 2 in s:
    print("There is 2 in s")
elif 4 in s:            # Find out if element 2 is present in s. Same for element 4
    print("There is 4 in s")

print(s[0]) # Get the first element of s

print(s[-1]) # Get the last element of s

x=s.pop(1) # Remove element at index 2 of s
print(s)

y=s.remove(2) # Remove element 2 from s
print(s)

t=s.append(7) # Add 7 at the end of s
print(s)

f=s.insert(2,6) # Add 6 in position 2 in s
print(s)

m=0
for j in s:
    m+=j**2
print(m) # Get the sum of the squares of the numbers of s?
