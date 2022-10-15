def exam():
	x=float(input("Exam grade-"))
	if 100>=x>=60:
	    print("you pass")
	elif 0<=x<60:
	    print("you can not pass")
	else:
		print("Please input number in between 0-100")
		exam()
exam()
