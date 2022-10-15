x=[{"A":"S001"}, {"A": "S002"}, {"B": "S001"}, {"B": "S005"}, {"C":"S005"}, {"A":"S009"},{"C":"S007"}]
l=[]
for i in x:
    l.append(*(i.values()))
for j in l:
    if l.count(j)>1:
        l.remove(j)
print('Unique Values:',set(l))