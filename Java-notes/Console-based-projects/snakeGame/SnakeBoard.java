package snakeGame;
import snakeGame.Point;
import java.util.Scanner;

public class SnakeBoard{

    private char[][] board;

    private Point[] snakeMovements;
    
    private int boardSize;

    Scanner scanner = new Scanner(System.in);

    // parameterized constructor
    public SnakeBoard(int boardSize){
        
        this.boardSize = boardSize;

        this.initializeBoard();
    }
    // default constructor
    public SnakeBoard(){

        //setting default board size as 5 
        this.boardSize = 5;

        this.initializeBoard();
    }

    public void clearBoard()
    {
        for(int i=0;i<this.boardSize;i++)
            for(int j=0;j<this.boardSize;j++)
                this.board[i][j]='-';
    }

    public void initializeBoard(){

        System.out.println("Board size : "+this.boardSize);

        System.out.println("Initializing the board ...");

        // intitalizing the boardSize
        this.board = new char[boardSize][boardSize];
        
        // initializing the snake movements
        this.snakeMovements = new Point[boardSize-2];

        this.clearBoard();

        // intializing the snake into the board
        this.board[1][1]='H';
        this.snakeMovements[0] = new Point(1,1);
        for(int j=2;j<this.boardSize-2;j++)
        {
            this.board[1][j]='0';
            this.snakeMovements[j-1] = new Point(1,j);
        }
        this.board[1][this.snakeMovements.length]='T';
        this.snakeMovements[this.boardSize-3] = new Point(1,this.boardSize-2);
    }

    public void displayBoard()
    {
        System.out.println("Displaying the Game Board");
        for(int i=0;i<this.boardSize;i++)
        {
            for(int j=0;j<this.boardSize;j++)
                System.out.print(this.board[i][j]);
            System.out.println();
        }
    }

    public boolean isSnakeCrashed(){
        for(int i=1;i<this.snakeMovements.length;i++)
        {
            // checking if 'H' touched the body of the snake
            if(this.snakeMovements[i].getX()==this.snakeMovements[0].getX() && 
                this.snakeMovements[i].getY()==this.snakeMovements[0].getY())
                return true;
        }
        return false;
    }


    public void drawSnake(){
        
        this.clearBoard();
        
        int snakeEnd = snakeMovements.length-1;
        for(int i=1;i<snakeEnd;i++)
            this.board[snakeMovements[i].getX()][snakeMovements[i].getY()]='0';
        this.board[snakeMovements[snakeEnd].getX()][snakeMovements[snakeEnd].getY()]='T';
        this.board[snakeMovements[0].getX()][snakeMovements[0].getY()]='H';
        if(isSnakeCrashed())
        {
            this.displayBoard();
            System.out.println("oops !!! you bite yourself !!! Game Over !!!");
            System.exit(0);
        }
    }
    public void startGame(){
        char choice;
        do{
            System.out.print("Do you want to continue the game? Y or N :> ");
            choice = Character.toLowerCase(scanner.next().charAt(0));
            scanner.nextLine();

            if(choice=='y')
            {
                this.displayBoard();
                System.out.print("Enter The Snake Movements(Any Case Value) B (Bottom), T (Top),L (Left),R (Right) : ");
                String movements = scanner.nextLine().trim();

                // need to implement this game loop and display the board to user
                for(int i=0;i<movements.length();i++)
                {   
                    char movementChoice = Character.toLowerCase(movements.charAt(i));
                    if(movementChoice=='b')
                    {
                        System.out.println("In bottom movement");
                        if(snakeMovements[0].getX()+1== snakeMovements[1].getX() && snakeMovements[0].getY()==snakeMovements[1].getY())
                        {
                            System.out.println("We cannot move downwards while moving up...");
                        }
                        else{
                            for(int itr=snakeMovements.length-1;itr>=1;itr--)
                            {
                                snakeMovements[itr].setX(snakeMovements[itr-1].getX());
                                snakeMovements[itr].setY(snakeMovements[itr-1].getY());
                            }
                            if(snakeMovements[0].getX()==this.boardSize-1 )
                                snakeMovements[0].setX(0);
                            else
                                snakeMovements[0].setX(snakeMovements[0].getX()+1);
                            this.drawSnake();
                            this.displayBoard();
                        }
                    }
                    else if(movementChoice=='t')
                    {
                        System.out.println("In Top movement");
                        if(snakeMovements[0].getX()-1== snakeMovements[1].getX() && snakeMovements[0].getY()==snakeMovements[1].getY())
                        {
                            System.out.println("We cannot move downwards while moving up...");
                        }
                        else{
                            for(int itr=snakeMovements.length-1;itr>=1;itr--)
                            {
                                snakeMovements[itr].setX(snakeMovements[itr-1].getX());
                                snakeMovements[itr].setY(snakeMovements[itr-1].getY());
                            }
                            if(snakeMovements[0].getX()==0 )
                                snakeMovements[0].setX(this.boardSize-1);
                            else
                                snakeMovements[0].setX(snakeMovements[0].getX()-1);
                            this.drawSnake();
                            this.displayBoard();
                        }
                    }
                    else if(movementChoice=='l')
                    {
                        System.out.println("In Left movement");
                        if(snakeMovements[0].getY()-1 == snakeMovements[1].getY() && snakeMovements[0].getX() == snakeMovements[1].getX())
                        {
                            System.out.println("You can't go in left while going in right direction");
                        }
                        else 
                        {
                            for(int itr=snakeMovements.length-1;itr>=1;itr--)
                            {
                                snakeMovements[itr].setX(snakeMovements[itr-1].getX());
                                snakeMovements[itr].setY(snakeMovements[itr-1].getY());
                            }
                            if(snakeMovements[0].getY()==0 )
                                snakeMovements[0].setY(this.boardSize-1);
                            else
                                snakeMovements[0].setY(snakeMovements[0].getY()-1);
                            this.drawSnake();
                            this.displayBoard();
                        }
                    }
                    else if(movementChoice=='r')
                    {
                        System.out.println("In right movement");
                        if(snakeMovements[0].getY()+1 == snakeMovements[1].getY() && snakeMovements[0].getX() == snakeMovements[1].getX())
                        {
                            System.out.println("You can't go in right while going in left direction");
                        }
                        else 
                        {
                            for(int itr=snakeMovements.length-1;itr>=1;itr--)
                            {
                                snakeMovements[itr].setX(snakeMovements[itr-1].getX());
                                snakeMovements[itr].setY(snakeMovements[itr-1].getY());
                            }
                            if(snakeMovements[0].getY()==this.boardSize-1 )
                                snakeMovements[0].setY(0);
                            else
                                snakeMovements[0].setY(snakeMovements[0].getY()+1);
                            this.drawSnake();
                            this.displayBoard();
                        }
                        
                    }
                    else{
                        System.out.println("Invalid Input given for movements !!!");
                    }
                }
            }
            else if(choice=='n')
            {
                System.out.println(" Game Over...Time to say Good Bye !!!");
                break;
            }
            else{
                System.out.println("Enter only valid inputs Y or N");
            }

        }while(true);
    }
    

}