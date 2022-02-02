#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void displayBoard(int n,char board[n][n])
{
	printf("\ncurrent board\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
bool isSnakeCrashed(int snakeLength, int snakeMovements[snakeLength][2])
{
	for(int i=1;i<snakeLength;i++)
	{
		if(snakeMovements[i][0]==snakeMovements[0][0] && snakeMovements[i][1]==snakeMovements[0][1])
			return true;
	}
	return false;
}
void main()
{
	int n;
	printf("\nWELCOME TO SNAKE GAME\nEnter the size of the board:");
	scanf("%d",&n);
	
	//snake board
	char board[n][n];
	
	//snake
	int snakeLength=n-2;
	int snakeMovements[snakeLength][2];
	
	//initialize the board
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			board[i][j]='-';
		}	
	}	
	
	displayBoard(n,board);
	
	//initialize the snake in board
	board[1][1]='H';
	snakeMovements[0][0]=1;
	snakeMovements[0][1]=1;
	for(int i=2;i<n-2;i++)
	{	
		board[1][i]='0';
		snakeMovements[i-1][0]=1;
		snakeMovements[i-1][1]=i;
	}	
	board[1][n-2]='T';
	snakeMovements[snakeLength-1][0]=1;
	snakeMovements[snakeLength-1][1]=n-2;
	
	
	displayBoard(n,board);
	char choice;
	
	//playloop
	do
	{
		printf("\n do you want to continue the game? Y or N:");
		scanf(" %c",&choice);
		
		if(choice=='Y')
		{
			char movements[100];
			printf("\nEnter your snake Movements String:( B - Bottom , T - Top , L-Left , R-Right: ");
			scanf("%s",movements);
			for(int i=0;i<strlen(movements);i++)
			{
				printf("\nthe current board movements for move : %c",movements[i]);
				
				//bottom movements
				if(movements[i]=='B')
				{
					if(snakeMovements[0][0]+1==snakeMovements[1][0] ||(snakeMovements[0][1]==n-1 && snakeMovements[1][1]==0 && snakeMovements[0][0]!=snakeMovements[1][0]))
					{
						printf("\n you cannot move towards bottom while moving toward top directions");
					}
					else
					{
						
						for(int j=snakeLength-1;j>=1;j--)
						{
							snakeMovements[j][0]=snakeMovements[j-1][0];
							snakeMovements[j][1]=snakeMovements[j-1][1];
						}
						
						if (snakeMovements[0][0]==n-1)
							snakeMovements[0][0]=0;
						else
						{
							snakeMovements[0][0]+=1;
						}
						if(isSnakeCrashed(snakeLength,snakeMovements))
						{
							printf("\n*** Snake Crashed ***");
							exit(0);
						}
					}
					
						
 				}
 				
 				//top movements
 				else if(movements[i]=='T')
 				{
 					if(snakeMovements[0][0]==snakeMovements[1][0]+1 ||(snakeMovements[0][1]==0 && snakeMovements[1][1]==n-1))
					{
						printf("\n you cannot move toward top while moving in bottom direction");
					}
					else
					{
						
						for(int j=snakeLength-1;j>=1;j--)
						{
							snakeMovements[j][0]=snakeMovements[j-1][0];
							snakeMovements[j][1]=snakeMovements[j-1][1];
						}
						if (snakeMovements[0][0]==0)
							snakeMovements[0][0]=n-1;
						else
						{
							snakeMovements[0][0]-=1;
						}
						if(isSnakeCrashed(snakeLength,snakeMovements))
						{	
							printf("\n*** Snake Crashed ***");
							exit(0);
						}
					}
 					
 				}
 				
 				//right movements
 				else if(movements[i]=='R')
 				{
 					
 					if(snakeMovements[0][1]+1==snakeMovements[1][1])
 					{
 					
 						printf("\n you cannot move towards left direction while moving in right direction");
 					}
 					else
 					{
 						for(int j=snakeLength-1;j>=1;j--)
						{
							snakeMovements[j][0]=snakeMovements[j-1][0];
							snakeMovements[j][1]=snakeMovements[j-1][1];
						}
 						if (snakeMovements[0][1]==n-1)
							snakeMovements[0][1]=0;
						else
						{
							snakeMovements[0][1]+=1;
						}
						if(isSnakeCrashed(snakeLength,snakeMovements))
						{
							printf("\n*** Snake Crashed ***");
							exit(0);
						}
					}	
 					
 				}
 				
 				//left movements
 				else if(movements[i]=='L')
 				{
 					if(snakeMovements[0][1]==snakeMovements[1][1]+1)
 					{
 						printf("\n you cannot move towards right while moving in left direction");
 					}
 					else
 					{
 						for(int j=snakeLength-1;j>=1;j--)
						{
							snakeMovements[j][0]=snakeMovements[j-1][0];
							snakeMovements[j][1]=snakeMovements[j-1][1];
						}
 						if(snakeMovements[0][1]==0)
	 					{
	 						snakeMovements[0][1]=n-1;
	 					}
	 					else
	 						snakeMovements[0][1]-=1;
	 					
	 					if(isSnakeCrashed(snakeLength,snakeMovements))
						{
							printf("\n*** Snake Crashed ***");
							exit(0);
						}
	 					
	 				}
 					
 				}
 				}
 				//clearBoard
 				for(int i=0;i<n;i++)
 				{
 					for(int j=0;j<n;j++)
 					{
 						board[i][j]='-';
 					}
 				}
 				// drawing Snake on the board
 				board[snakeMovements[0][0]][snakeMovements[0][1]]='H';
 				for(int i=1;i<snakeLength-1;i++)
 				{
 					board[snakeMovements[i][0]][snakeMovements[i][1]]='0';
 				}
 				
 				board[snakeMovements[snakeLength-1][0]][snakeMovements[snakeLength-1][1]]='T';
 				
 				displayBoard(n,board);
		}
		else if(choice =='N')
		{
			printf("\n *** GAME ENDED BYE ***");
			break;
		}
		else
		{
			printf("\n please enter Y or N only no other character");
		}		
		
	}while(1);
	
	
}
