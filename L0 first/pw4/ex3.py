"""
1)When no change is conceivable across time, it is said to be immutable.
 In Python, an object is said to be immutable if its value cannot be altered over time.
 The worth of these artifacts is inexhaustible once they have been made.
Objects of built-in type that are immutable are:

Numbers (Integer, Rational, Float, Decimal, Complex & Booleans)
Strings
Tuples
"""
t=(2,3,4)
#t.append(1) we can't change tuple's elements.
"""
2)Python supports six different types of sequences.
 These are strings, lists, tuples, byte sequences, byte arrays, and range objects. 
"""
list("123")
tuple("123")
str(123)
bytes('123', 'utf8')
range(6)
bytearray(5)
"""
 3)"is" is for reference equality. It's used to know if two references refer (or point) to the same object, i.e if they're identical.
  Two objects are identical if they have the same memory address.

  "==" is for value equality. It's used to know if two objects have the same value.
"""
a=[1,2,3]
b=a
c=a[:]
print(id(a),id(b),id(c))
print(a is b)
print(a==b)
print(a is c)
print(a==c)

