'''first example of a python program.'''

import math

def display_perimeter_circle():   ## give a name to the program
	'''
	Display the perimeter of a circle whose 
	radius is entered using the keyboard by the user.
	'''
	
	while True:
		x=input("Do you want continue? \n-")
		if x=="n" or x=="N":
			print("The program was stoped")
			break
		else:
			# ask the user for the radius
			capture = input('Circle radius : ')    # an input entered on the keyboard
			radius = float(capture)                   # converted to a real number

			# calculate the perimeter
			perimeter = 2 * math.pi * radius

			# display the perimeter to the user
			print("The perimeter of a circle with radius", radius, 'is', perimeter)

display_perimeter_circle()        ## run the program display_perimeter_circle
