package snakeGame;
import snakeGame.SnakeBoard;
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("*** Welcome to snake Game **** ");
        System.out.print("Enter the board size(Choose 5 or above) to have a good view : ");
        int boardSize = scanner.nextInt();
        SnakeBoard snakeBoard = new SnakeBoard(boardSize);
        snakeBoard.startGame();
    }
}