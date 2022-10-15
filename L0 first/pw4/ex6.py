d={1:'January',2:'February',3:'March', 4:'April', 5:'May',6:'June ',7:'July' ,8:'August ',9:'September ',10:'October' ,11:'November' ,12:'December'}
def days_in_month( month):
    "it is function which we enter month and the program find how many day there is in month."
    if month in [4,6,8,12]:
        return f"There are 30 days in {d[month]}" 
    elif month in [1,3,5,7,9,11]:
        return f"There are 31 days in {d[month] }"
    elif month == 2: 
        return f"There are 29 days in {d[month]}"
    else:
        return None
print("1-January \n2-February \n3-March \n4-April \n5-May \n6-June \n7-July \n8-August \n9-September \n10-October \n11-November \n12-December")
print("Please enter a month ")
month = int(input("Month: "))
print(days_in_month(month))