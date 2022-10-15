"""
1) We can since they exist in many purposes.
2) The function sp1's parameter "a" persists as long as the function is being performed.
3) This expression assigns the value of function sp1's argument "a" to the variable "a" generated in function main ().
4) The program's output is 6; 7; 11. Because variable "b" is local to the function sp1, we can't call it outside of the sp1 function, function print(b) isn't called."""

def sp1(a):
	b = 5
	return a + b

def sp2(a):
	return 2 * a
def main():
	print(sp1(2))
	print(sp2(3))
	a = 6
	print(sp1(a=a))

main()