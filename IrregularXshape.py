'''
s1 forest    6
s2 plant     5
s3 college   7
s4 code      4


col calculation

leftX=max(s1,s3)
rightX=max(s2,s4)


col=leftX+rightX


row calculation

firstHalfX=max(s1,s2)=max(6,5)=6
secondHalfX=max(s3,s4)=max(7,4)=7


row=13

fRow = row - firstHalfX
sRow = row - secondHalfX

input

forest
plant
college
code


output

*t**********
**s********t
***e******n*
****r****a**
*****o**l***
******fp****
******cc****
*****o**o***
****l****d**
***l******e*
**e*********
*g**********
e***********
'''
s1=input().strip() 
s2=input().strip() 
s3=input().strip()
s4=input().strip()

# row calculation 

firstHalf , secondHalf = max(len(s1),len(s2)) , max(len(s3) , len(s4))

row= firstHalf + secondHalf

fRow = firstHalf

# column calculation


col , fcol ,scol=0,0,0 

col= max( len(s1),len(s3))+max(len(s2),len(s4))


l=[ ['*']*col for i in range(row)]

fRow=fRow-1
fCol=max(len(s1),len(s3))-1
sCol=fCol+1
x,y=fRow,fCol 

print(fRow,fCol)

for i in s1:
    l[x][y]=i 
    x,y=x-1,y-1 

x,y = fRow,sCol

[print(*i,sep="") for i in l]

print('$')

for i in s2:
    l[x][y]=i 
    x,y=x-1,y+1 

x,y= fRow+1,fCol

[print(*i,sep="") for i in l]

print('$')

for i in s3:
    l[x][y]=i 
    x,y=x+1,y-1 

x,y=fRow+1,sCol

[print(*i,sep="") for i in l]

print('$')

for i in s4:
    
    l[x][y]=i 
    x,y=x+1,y+1 

[print(*i,sep="") for i in l]

print('$')
