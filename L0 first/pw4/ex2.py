s = []
s.append(2)         	# s=[2] 2 append to s list
s.insert(0, 4)      	# s=[4,2] 4 append to 0 position of s list
s.insert(20, 7)     	# s=[4,2,7] 7 insert to 2 position of s list
s[1] = 'd'          	# s=[4, 'd', 7] number of 1st position of s list changed with 'd'
s[2] /= s[2]        	# s=[4,'d',1.0] number of 2st position of s list changed with 1
x=s.count(1)          	# x=1 finding how many is there 1 in the s list
s[0], s[1] = s[1], s[0] # s=['d', 4, 1.0] value of 0th position of s list changed with value of 1th position of s list
p, _, d= s         	    # p='d'  _=4  d=1.0 
first, *following = s 	# first=d following=[4,1.0] 
b = [False, True]
s.extend(b)         	# s=['d', 4, 1.0, False, True] b's elements append to s 
x = s.pop(1)        	# x=4 s =['d', 1.0, False, True] 1st position of s list deleted
s2 = [2, 3, 5]
i, s2[i], x = s2    	# i=2 s2=[2,3,3] x=5
s.append(s2)        	# s=['d', 1.0, False, True, [2, 3, 3]] s2 list append to s list
s2.append(s)        	# s2=[2, 3, 3, ['d', 1.0, False, True, [...]]] s=[['d', 1.0, False, True, [2, 3, 3, [...]]] s list append to s2 and s2 list append to s with order in infinite 
t = tuple(b)        	# t=(False, True) list changed to tuple
s = list('End.')    	# s=['E', 'n', 'd', '.'] s2=[2, 3, 3, ['d', 1.0, False, True, [...]]]
