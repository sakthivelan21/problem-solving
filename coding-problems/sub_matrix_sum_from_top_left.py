'''
The program must accept an integer matrix of size R*C as the input. The program must find all possible
submatrices starting from the top left cell of the given matrix. Then the program must print 
the sum of each submatrix as shown  in the example

input
3 3
1 2 3
4 5 6
7 8 9

output
1 3 6
5 12 21
12 27 45

explanation
1 -> 1
3 -> 1+2 
6 -> (1+2+3)
5 -> 1+4
12 -> 1+2+4+5
21 -> 1+2+3+4+5+6
12 -> 1+4+7
27 -> 1+2+3+4+5+7+8
45 -> 1+2+3+4+5+6+7+8+9
'''
r,c=map(int,input().split())
l=[list(map(int,input().split())) for i in range(r)]
for i in range(1,r):
	l[i][0]+=l[i-1][0]
for j in range(1,c):
	l[0][j]+=l[0][j-1]
for i in range(1,r):
	for j in range(1,c):
		l[i][j]+=l[i-1][j]+l[i][j-1]-l[i-1][j-1]
[print(*i) for i in l]
