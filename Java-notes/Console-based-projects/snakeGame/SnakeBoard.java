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

        System.out.println("Initializing the board ...");

        // intitalizing the boardSize
        this.board = new char[boardSize][boardSize];
        
        // initializing the snake movements
        this.snakeMovements = new Point[boardSize-2];

        this.clearBoard();

        // intializing the snake into the board
        this.board[1][1]='H';
        this.snakeMovements[0] = new Point(1,1);
        for(int j=2;j<this.boardSize-1;j++)
        {
            this.board[1][j]='0';
            this.snakeMovements[j-1] = new Point(1,j);
        }
        this.board[1][this.boardSize-3]='T';
        this.snakeMovements[this.boardSize-3] = new Point(1,this.boardSize-2);
    }

    public void displayBoard()
    {
        System.out.println("Displaying the Game Board");
        for(int i=0;i<this.boardSize;i++)
        {
            for(int j=0;j<this.boardSize;j++)
                System.out.print(this.board[i]);
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

    public void startGame(){
        char choice;
        do{
            System.out.print("Do you want to continue the game? Y or N :> ");
            choice = Character.toLowerCase(scanner.next().charAt(0));
            scanner.nextLine();

            if(choice=='y')
            {
                System.out.print("Enter The Snake Movements(Any Case Value) B (Bottom), T (Top),L (Left),R (Right) : ");
                String movements = scanner.nextLine();

                // need to implement this game loop and display the board to user
                for(int i=0;i<movements.length();i++)
                {   
                    if(movements.charAt(0)=='b')
                    {

                    }
                    else if(movements.charAt(0)=='t')
                    {
                        
                    }
                    else if(movements.charAt(0)=='l')
                    {
                        
                    }
                    else if(movements.charAt(0)=='b')
                    {
                        
                    }
                    else{
                        System.out.println("Invalid Input given for movements !!!");
                    }
                }
            }
            else if(choice=='n')
            {
                System.out.println("Time to say Good Bye !!! Game End...");
                break;
            }
            else{
                System.out.println("Enter only valid inputs Y or N");
            }

        }while(true);
    }
    

}