'''
we have to generate a number pattern with seven to form the series

1,7,8,49,50,56,57,343,344,

7^0=1
7^1=7
7^1+7^0=8
7^2=49
7^2+7^0=50
7^2+7^1=56
..............

input 

5

output

1,7,8,49,50
'''

l=[1]
n=int(input("Enter the number of n value : "))
s,c=7,0
while(len(l)<n):
	l.append(s)
	for j in range(c+1):
		l.append(s+l[j])
	s=s*7
	c=len(l)-1
print(*l[:n])
