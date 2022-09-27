# Snake Game - Console Application in Java 

+ A minimal application where you can input the `size of board` and `movements` to control the snake.

### To run the application 

```
before_snakeGameFolder $ javac snakeGame/Main.java

before_snakeGameFolder $ java snakeGame/Main
```

### Output of the application
```
$ java snakeGame/Main
*** Welcome to snake Game **** 
Enter the board size(Choose 5 or above) to have a good view : 8
Board size : 8
Initializing the board ...
Do you want to continue the game? Y or N :> y
Displaying the Game Board
--------
-H000T0-
--------
--------
--------
--------
--------
--------
Enter The Snake Movements(Any Case Value) B (Bottom), T (Top),L (Left),R (Right) : BLBR
In bottom movement
Displaying the Game Board
--------
-0000T--
-H------
--------
--------
--------
--------
--------
In Left movement
Displaying the Game Board
--------
-000T---
H0------
--------
--------
--------
--------
--------
In bottom movement
Displaying the Game Board
--------
-00T----
00------
H-------
--------
--------
--------
--------
In right movement
Displaying the Game Board
--------
-0T-----
00------
0H------
--------
--------
--------
--------
Do you want to continue the game? Y or N :> n
 Game Over...Time to say Good Bye !!!
```