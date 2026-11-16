'''
Find Sub String - First & Last Occurence

The program must accept N string values as the input . The program must print the output based  on the following conditions

	- for each string : the program must mark the first occurence of the last letter of the current string in the next string. 

	if the last letter is not present , then mark the first letter in the next string , consider the first string as the next string 

	of the Nth string.

	- For each string : the program must mark the last occurence of the first letter of the current string in the previous string.

	if the first letter is not present , then mark the last letter in the previous string, consider the nth string as previous string.

	The program must print letters in between the two position marked on each string (both inclusive)

	input 

	4

	jungle 

	notebook

	king

	poem

	output 

	jun 

	ebook

	king

	poem

	input
	
	5
	umbrella
	mango
	achoko
	coconut
	task
	
	ouptut
	
	um
	a
	cho
	oconut
	task

	
		
'''
n = int(input())

l=[input().strip() for i in range(n)]

k=[[0,len(l[i])] for i in range(n)]

for i in range(n):

	if i+1<n:
		if l[i][-1] in l[i+1]:
			k[i+1][0] = l[i+1].index(l[i][-1])
	else:

		if l[i][-1] in  l[0]:
			k[i+1][0] = l[0].index(l[i][-1])

	if i-1>=0:
		for j in range(len(l[i-1])-1,-1,-1):
			if l[i-1][j]==l[i][0]:
				k[i-1][1]=j
				break
	else:
		for j in range(len(l[0])-1,-1,-1):
			if l[0][j]==l[i][0]:
				k[0][1]=j
				break
	#print(k)
for i in range(n):
	a,b=min(k[i]),max(k[i])+1
	print(l[i][a:b])
		
			
