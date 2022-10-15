def  grade():
    x=float(input("Exam grade-"))
    if 100>=x>90:
        print("A")
    elif 90>=x>80:
        print("B")
    elif 80>=x>70:
        print("C")
    elif 70>=x>60:
        print("D")
    elif 60>=x>50:
        print("E")
    elif 50>=x>=0:
        print("F")
    else:
        print("You can input grade range 0-101")
        grade()
grade()