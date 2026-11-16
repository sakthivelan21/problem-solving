'''
	The program must accept a string S representing a number . The string S contain digits,underscores and X's. The program must print number of possible integers that can be formed the string S based on the following conditions
	
	- All the underscores must be replaced with the digits.
	- All X's must be replaced with the same digit.
	- The integer must be divisible by 25 and does not contain any leading zeroes
	
	example 
	
	8_XX 
	
	output 10 
	
	_ _ _ _ _ _ 
	
	output 36000
	
	XX9_X_
	
	output 30 
	
	_ X X _ _ X 
	
	output 360 
	
	** MY SOLUTION APPROACH IS NOT AN ACCURATE ONE TO THIS PROBLEM BUT WILL WORK FOR ALL LOWER TEST CASES BY MATH **
'''
def getDashValue(number):
	count,length=1,len(number)
	for i in range(length):
		if number[i]=='_':
			if i==0:
				count*=9
			elif i==length-1 or i==length-2:
				count*=2
			else:
				count*=10
	return count
def getXvalue(number):
	length=len(number)
	if number.count('X')==0:
		return 1
	elif number[-2:]=='XX':
		return 1
	elif number[length-1]=='X' or number[length-2]=='X':
		return 2
	elif number[0]=='X':
		return 9
	return 10
def calculateCount(number,svalDash):
	count=0
	if len(number)==2:
		return svalDash[number]
	elif number[0]=='X' and number[-1]=='X' and number[-2]=='X':
		return 0 
	elif (number[0]=='X' and number[-1]=='X'):
		count=getDashValue(number)
	elif number[-2:]=='_X':
		count=2*getDashValue(number)
	elif number[-2:] in 'X_':
		if number[0]!='X':
			count=2*getDashValue(number)
		else:
			count=getDashValue(number)
			count+=count//2
	else:
		count=getDashValue(number)*getXvalue(number)
	return count 
deb={'X':1,'0':1,'_':1}
if len(number)==1:
	if number in deb.keys():
		print(deb[number])
	else:
		print(0)
else:
	valDash={'_0':1,'_5':2,'X0':1,'X5':2,'0_':0,'2_':1,'5_':1,'7_':1,'0X':0,'2X':1,'5X':1,'7X':1}
	svalDash={'__':3,'_X':3,'X_':3,'XX':0}
	if number[0]=='0':
		print(0)
	else:
		count=1
		if number[-1].isdigit() and number[-2].isdigit() and int(number[-2:])%25==0: # 25
			count*=getDashValue(number)*getXvalue(number)
		elif number[-2:] in valDash.keys():
			if len(number)==2:
				count=valDash[number]
			else:
				count*=getDashValue(number)*getXvalue(number)
		elif number[-2:] in svalDash.keys():
			count=calculateCount(number,svalDash)
		else:
			count=0 
		print(count)
