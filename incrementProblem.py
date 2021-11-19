'''
numberSplitter 
1
-2++
-1
'''
def valueIncrementor(operator):
	if operator=='--':
		return -1
	return +1

def getValue(number):
	index,length=0,len(number)
	while index<length and number[index].isdigit()==False:
		index+=1
	parts=[]
	parts.append(number[:index])
	prev=index
	while index<length and number[index].isdigit():
		index+=1
	parts.append(number[prev:index])
	parts.append(number[index:])
	print(parts)
	num=int(parts[1])
	if len(parts[0])==1:
		if parts[0]=='-':
			num*=-1
	elif len(parts[0])==2:
		num+=valueIncrementor(parts[0])
	if (len(parts[-1])==2):
		num+=valueIncrementor(parts[-1])
	return num
n=int(input())
array=input().split()
for i in range(n):
	print(getValue(array[i]),end=" ")
