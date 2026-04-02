import java.util.Random;

public class Pt extends Pcursor {
    Random random = new Random();
   int length = 30;
    int width = 30;
    int x = 1;
    int y = 1;
    int[] tailX;
    int[] tailY;
    int fruitX;
    int fruitY;
    int score = 0;
    boolean running = true;
    boolean gameover = false;

    public enum Direction {
        UP, DOWN, LEFT, RIGHT
    }

    // Track the current direction
    public Direction currentDirection = Direction.RIGHT;

  Pt(){
     fruitX = random.nextInt(2,30);
     fruitY = random.nextInt(2,20);
  }

  
}
