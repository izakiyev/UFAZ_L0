# some codes were writen in comment because if they work program will not able to continue

set1={1,2,3,2}
print(len(set1)+1)  #get the size of the set (the number of elements it contains)
assert 2 in set1,'2 is not in set1' # check if element 2 is present in the set
print('yes,element 2 is present in the set')
# assert 5 in set1 , '5 is not in set1'   #check if element 5 is present in the set
# print("yes,element 5 is present in the set")
set1.add(11) # add 11 to the set. What is the size of the set?
print(len(set1))
set1.add(2) # add 2 in the set. What is his size ?
print(len((set1)))
set1.remove(2) # remove element 2 from the set.
print(set1)
# assert 2 in set1 , '2 is not in set1'  # 2 is it still in the set?
# print("yes,2 is still in the set")
e1={1,2,3}
e2={2,3,4,5}
z = e1.intersection(e2) # intersection of e1 and e2
print(z)
y = e1.union(e2) # union of e1 and e2
print(y)
print(*e1.difference(e2)) # the elements of e1 that are not in e2?
ine1=e1.difference(e2)
ine2=e2.difference(e1)
print(*ine1,*ine2) 
e={} # create an empty set (called e)
assert isinstance (e, set),"it is a dictionary" 