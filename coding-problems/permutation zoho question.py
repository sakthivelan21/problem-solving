'''
Consider two food delivery person A & B. There are totally N orders in the shop. The tipe for delivering varies for the both A & B. If A delivers the ith order tip amout will be A[i] & if B delivers the ith order the tip amount will be B[i]. A & B are allowed to deliver a maximum of C & D numbers of orders respectively due to the time constraint


input 

5 3 4
2 5 3 9 7
5 8 5 8 6

output

34

A delivers orders 3,4 -> 9+7 =16
B delivers orders 0,1,2 -> 5 + 8 + 5 =18


input 

5 3 2
2 5 3 9 7
5 8 5 8 3

output 

32

input 

2 2 1
100 3
99 1

output 
103

input

3 2 1
3 5 2
1 8 6

output

14

'''
n,c,d=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
from itertools import permutations 
index=[i for i in range(0,n+2)]
indices=[i for i in range(n)]
aSet=list(permutations(index,2))
total=0

for val in aSet:
    if sum(val)==n and val[0]<=c and val[1]<=d:
        for arr in list(permutations(indices,val[0])):
            s,t=0,0
            for j in range(n):
                if j in arr:
                    s+=a[j]
                else:
                    t+=b[j]
            if s+t>total:
                total=s+t 
print(total)
