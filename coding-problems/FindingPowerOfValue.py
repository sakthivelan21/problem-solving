'''
To find whether the given numbers are power of x

input 

9 5

25 15 125 625 380625 152587890625 10 90

output 

4

concept 

we have to check whether 

125 is a power of 5 or not 

we know that and we use logarithms to make the value easy to find

5^X =125 , we need to get value 3



take log on both sides



log(5^X)=log(125)

X*log(5)=log(125)

X=log(125)/log(5)

if X is a whole number without floating value then 125 is a power of 5



'''
from math import log,floor,ceil
def isPowerValue(number,base):
	#because log1 is 0
	if base==1:
		return False
	value=round(log(number)/log(base),8)
	if floor(value)==ceil(value):
		return True
	return False
n,x=map(int,input().split())
l=list(map(int,input().split()))
count=0
for i in range(n):
	if isPowerValue(l[i],x):
		count+=1 
print(count)
