'''
	The program must accept N integers and an integer k as input . The program must convert the  given sequence of N integers of N
	into a rising sequence(i.e. a sequence of integers in strictly increasing order) by adding k to one or more elements, any
	number of times. The program must print the minimum number of times the value k to be added  to the sequence to make the rising
	sequence as the input

	boundary conditions

	2<=N<=1000
	1<=Each integer value,k<=10^6

	input

	4
	2 6 6 5
	2

	output

	3

	explaination: here k=2 so to form a rising sequence k has to be added three times..
	2,6,8,9

	3rd integer -> 6+2=8
	4th integer -> 5+2+2=9

	input

	4
	1 2 3 4
	1

	output

	0

	input

	5
	1 100 2 5 5
	3

	output
	100
'''

n=int(input())

l=list(map(int,input().split()))

k=int(input())

c=0
for i in range(0,n-1):

	if l[i]>=l[i+1]:

		count=(l[i]-l[i+1])//k+1

		l[i+1]+=k* count

		c+=count

print(c)
