#include<stdio.h>
#include<stdlib.h>

/*

Problem statement 

Two Players will be entering to play the game, player 1 and player 2. 

Each player should specify the path from source to destination or vice-versa . 

Then we have to draw a line there.

similarly when all four lines are closed we have to rename the box center as the player name and add  a score to the player 

the game continues untill all the boxes are closed, At last the winner status should be shown.

Every board updates must be displayed to the user.

case 1:
2 2 



*--*--*
|p1|p2|
*--*--*
|p1|p2|
*--*--*
12345
01234
* * *

* * *

* * *
0 1 2
1 2 3

4 5 6

7 8 9

output:
 p1 scored 2 points , p2 scored 2 points
*/

char*** board;

struct point{
    int x;
    int y;
};

int r,c;

int pointsLength=0,playerTurn=0,isPoint=0;

struct point** points;

struct point surrondingPoints[4] = {{-2,0},{2,0},{0,-2},{0,2}};

struct point nextPoints[4] = {{-1,0},{1,0},{0,-1},{0,1}};

// | 
struct point rightNextPoints[4] = {{-1,1},{0,2},{1,1},{0,0}};

struct point leftNextPoints[4] = {{-1,-1},{0,-2},{1,-1},{0,0}};


struct point topNextPoints[4]={{-1,-1},{-2,0},{0,0},{-1,1}};

struct point bottomNextPoints[4]={{1,-1},{2,0},{1,1},{0,0}};

int player1Score=0,player2Score=0;

// board initialization - completed
void initializeBoard(int row,int col)
{
    r = row*2+1;
    c = col*2 + 1;

    pointsLength = (row+1)*(col+1);
    printf("\nInitalized r - %d and c - %d",r,c);
    board = malloc(sizeof(char***)*r);
    points = malloc(sizeof(struct point*)*pointsLength);
    printf("\n pointsLength is %d",pointsLength);
    int index=0;
    for(int i=0;i<r;i++)
    {
        board[i] = malloc(sizeof(char**)*c);
        if(i%2==0)
            for(int j=0;j<c;j++)
            {
                board[i][j] = malloc(sizeof(char*)*2);
                if(j%2==0)
                {
                    board[i][j] = "*";
                    struct point* p = malloc(sizeof(struct point));
                    p->x =i;
                    p->y = j;
                    points[index++]=p;

                }
                else 
                    board[i][j] = " ";
                
            }
        else {
            for(int j=0;j<c;j++)
            {
                board[i][j] = malloc(sizeof(char*)*2);
                board[i][j]=" ";
            }
        }
        
    }

    board[0][0]="*";


}

// display Points Board - completed
void displayPointsBoard(){
    printf("\n");
    for(int i=0;i<pointsLength;i++)
    {
        printf("%d,%d ",points[i]->x,points[i]->y);
    }
}

// display board - completed
void displayBoard(){
    printf("\n");
    for(int i=0;i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        {
            printf("%s",board[i][j]);
        }
        
    }

    // displayPointsBoard();
}


// to check if the game is over - completed
int isGameOver(){
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(board[i][j]==" ")
                return 0;
        }
    }
    return 1;
}

// to get the location points of the board  - completed
struct point* getPosition(int pos)
{
    pos--;
    if(pos>=0 && pos<pointsLength)
        return points[pos];
    return NULL;
}


// to check if the path is valid - completed
struct point isValidPath(struct point* start,struct point* end)
{
    for(int i=0;i<4;i++)
    {
        int x = start->x + surrondingPoints[i].x , y = start->y + surrondingPoints[i].y;
        // printf("\n %d:%d target %d:%d",x,y,end->x,end->y);
        if(x>=0 && x<r && y>=0 && y<c)
        {
            if(x==end->x && y==end->y)
                return nextPoints[i];
        }
    }
    struct point p={-1,-1};
    return p;
}

int pointsMatch(struct point pos , struct point p)
{
    return (pos.x == p.x && pos.y ==p.y);
}
// to draw the path && check for points

void drawLine(struct point* start,struct point* end,struct point pos){

    isPoint=0;
    int flag;
    struct point currentPoint=  {start->x+pos.x,start->y+pos.y};
    // to match the position left or right
    if(pointsMatch(pos,nextPoints[0]) || pointsMatch(pos,nextPoints[1]) )
    {
        board[start->x+pos.x][start->y+pos.y] = "|";
        flag=0;
        int count=0;

         
        // check For right Point
        for(int i=0;i<4;i++)
        {
            int x = currentPoint.x + rightNextPoints[i].x , y = currentPoint.y + rightNextPoints[i].y;
            // printf("\n %d:%d target %d:%d",x,y,end->x,end->y);
            if(x>=0 && x<r && y>=0 && y<c)
            {   
                count++;
                if(board[x][y]==" ")
                {
                    flag=1;
                    break;
                }
            }   
        }
        // printf("\n right next count - %d",count);
        if(flag==0 && count==4)
        {
            board[start->x+pos.x][start->y+pos.y+1]=(!playerTurn)?"P1":"P2";
            isPoint=1;
            if(!playerTurn)
                player1Score++;
            else 
                player2Score++;
        }

        flag=0;
        count=0;
        // check For left Point
        for(int i=0;i<4;i++)
        {
            int x = currentPoint.x + leftNextPoints[i].x , y = currentPoint.y + leftNextPoints[i].y;
            // printf("\n %d:%d target %d:%d",x,y,end->x,end->y);
            if(x>=0 && x<r && y>=0 && y<c)
            {   
                count++;
                if(board[x][y]==" ")
                {
                    flag=1;
                    break;
                }
            }   
        }
        // printf("\n left next count : %d",count);
        if(flag==0 && count==4)
        {
            board[start->x+pos.x][start->y+pos.y-1]=(!playerTurn)?"P1":"P2";
            isPoint=1;
            if(!playerTurn)
                player1Score++;
            else 
                player2Score++;
        }

    }
    // to match the bottom or top row
    else{
        board[start->x+pos.x][start->y+pos.y]="--";
        flag=0;
        int count=0;
        // check For bottom Point
        for(int i=0;i<4;i++)
        {
            int x = currentPoint.x + bottomNextPoints[i].x , y = currentPoint.y + bottomNextPoints[i].y;
            // printf("\n %d:%d target %d:%d",x,y,end->x,end->y);
            if(x>=0 && x<r && y>=0 && y<c)
            {   
                count++;
                if(board[x][y]==" ")
                {
                    flag=1;
                    break;
                }
            }   
        }
        // printf("\n right next count - %d",count);
        if(flag==0 && count==4)
        {
            board[start->x+pos.x+1][start->y+pos.y]=(!playerTurn)?"P1":"P2";
            isPoint=1;
            if(!playerTurn)
                player1Score++;
            else 
                player2Score++;
        }

        flag=0;
        count=0;
        // check For top Point
        for(int i=0;i<4;i++)
        {
            int x = currentPoint.x + topNextPoints[i].x , y = currentPoint.y + topNextPoints[i].y;
            // printf("\n %d:%d target %d:%d",x,y,end->x,end->y);
            if(x>=0 && x<r && y>=0 && y<c)
            {   
                count++;
                if(board[x][y]==" ")
                {
                    flag=1;
                    break;
                }
            }   
        }
        // printf("\n left next count : %d",count);
        if(flag==0 && count==4)
        {
            board[start->x+pos.x-1][start->y+pos.y]=(!playerTurn)?"P1":"P2";
            isPoint=1;
            if(!playerTurn)
                player1Score++;
            else 
                player2Score++;
        }


    }

     



}

void main(){
    
    /*Fetching the user inputs for board initialization*/
    
    int row,col;


    printf("\nEnter the number of rows : ");
    scanf("%d",&row);

    printf("\nEnter the number of column : ");

    scanf("%d",&col);

    // initializing the board
    initializeBoard(row,col);

    int start,end;

    while(!isGameOver())
    {
        displayBoard();
        printf("%s",(!playerTurn) ? "\nPlayer 1 Turn - Enter the path : " : "\nPlayer 2 Turn - Enter the path : ");
        scanf("%d %d",&start,&end);

        struct point* startPoint = getPosition(start);
        struct point* endPoint = getPosition(end);
        if(startPoint==NULL)
        {
           printf("\nStarting point %d is not Valid !!! Try Again",start);
           continue;
        }
        else if(endPoint==NULL)
        {
           printf("\nEnding point %d is not Valid !!! Try Again",end);
           continue;
        }
        else{
            // printf("\n%d,%d %d,%d",startPoint->x,startPoint->y,endPoint->x,endPoint->y);
            struct point p = isValidPath(startPoint,endPoint);
            if(p.x==-1 && p.y==-1)
            {
                printf("\nWe can't have path from %d to %d ",start,end);
            }
            else
            {
                printf("\nValid path");
                drawLine(startPoint,endPoint,p);
                if(isPoint)
                    continue;
            }
        }

        // toggling the player mode
        playerTurn = !playerTurn;
    }

    displayBoard();
    // finding the winner
    if(player1Score>player2Score)
        printf("\nPlayer 1 is the winner !!! score - %d",player1Score);
    else if(player2Score>player1Score)
        printf("\nPlayer 2 is the winner !!! score - %d",player2Score);
    else
        printf("It's a tie !!! Both player 1 and player 2 is the winner");
}

