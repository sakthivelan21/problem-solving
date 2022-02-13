'''
	Number pattern in Matrix
	
	four numbers will be passed as input which forms the four diagonal 
	
	matrix n will be always even square matrix
	
	had to fill the numbers in respective needed order
	
	n=6
	a,b,c,d=10,20,50,40
	
	after diagonal values in running values 
	
	fill a from left to right
	fill b from up to down 
	fill c from down to up
	fill d from right to left
	
	output
	
	
	10 11 12 13 14 20
	
	54 10 11 12 20 21
	   
	53 52 10 20 21 22
	      
	52 51 50 40 22 23 
	   
	51 50 42  41 40 24
	   
   	50 44 43 42 41 40
	
	 
'''

A,B,C,D=map(int,input().split())
n=int(input())

matrix=[['*']*n for i in range(n)]

# diagonal fixing elements

r=c=n//2-1
x,y=r+1,c+1 

while r>=0:
	matrix[r][c],matrix[r][y],matrix[x][c],matrix[x][y]=A,B,C,D
	r,c=r-1,c-1
	x,y=x+1,y+1 

# matrix swap area filling
x,y=1,n-2
start,end=0,n-1
while x<y:
	val1,val2,val3,val4=A+1,B+1,D+1,C+1
	for i in range(x,y+1):
		matrix[start][i]=val1 
		matrix[i][end]=val2
		val1,val2=val1+1,val2+1
	for i in range(y,x-1,-1):
		matrix[end][i]=val3 
		matrix[i][start]=val4
		val3,val4=val3+1,val4+1
	x,y=x+1,y-1
	start,end=start+1,end-1
[print(*i) for i in matrix]



