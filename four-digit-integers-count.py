"""
FOUR-DIGIT-INTEGERS_COUNT

The program must accept a string S containing only non-zero as the input.
The program must find the count of unique four-digit integers that can be formed using the digit in S based on the conditions

- exactly four digits must be picked from the string in the same order of their occurence.
- first 2 digits of the integer must be the same , say x
- last 2 digits of the integer must be the same , say y.
- the value of the digit y must be x+1.

example:

input

21112377388

output

2

explaination: the possible 2 four-digit integers are 2233 and 7788
"""

#algorithm targeted towards the solution to question angle with predicting all formations 

s=input().strip()
count=0
for number in range(1,10):
	numStr=str(number)*2 + str(number+1)*2
	for ch in s:
		if numStr and numStr[0]==ch:
			numStr=numStr[1:]
	if len(numStr)==0:
		count+=1
print(count)
