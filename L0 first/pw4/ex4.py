t = (5, 'x', []) #we can neither change tuple elements nor add an element
# Therefore, we must convert from the tuple to the list.
t=list(t)# changed to list
t[0] = 6 #0th element changed with 6 in list t 
del t[1] #second element deleted in list t
t[1].append(-1) #'-1' added to the empty list inside the t list
print(t)
