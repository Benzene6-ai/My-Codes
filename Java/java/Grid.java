import java.util.Random;

public class Grid {
    Pt snake;
    Random random = new Random();

    public Grid(Pt snake) {
        this.snake = snake;
    }

    public void printGrid() {
        snake.cursor();
        for (int i = 0; i <= snake.length; i++) {
            for (int j = 0; j <= snake.width; j++) {
                if (i == 0 || i == snake.length - 1 || j == 0 || j == snake.width - 1) {
                    System.out.print("#"); // Border
                } else if (i == snake.y && j == snake.x) {
                    System.out.print("O"); // Snake head
                } else if (i == snake.fruitY && j == snake.fruitX) {
                    System.out.print("F");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        System.out.println("Current score: " + snake.score);
    }

    public void collisionCheck(){
        if(snake.fruitX == snake.x && snake.fruitY == snake.y){
            snake.score += 10;
            snake.fruitX = random.nextInt(2,20);
            snake.fruitY = random.nextInt(2,20);
        
        }
        if (snake.x <= 0 || snake.x >= snake.length - 1 || snake.y <= 0 || snake.y >= snake.width - 1) {
                snake.running = false;
                snake.gameover = true;
            }

    }

    public void playerMove() {
        switch (snake.currentDirection) {
            case UP:    snake.y--; break;
            case DOWN:  snake.y++; break;
            case LEFT:  snake.x--; break;
            case RIGHT: snake.x++; break;
        }
        collisionCheck();
       
    }

    public void changeDirection(char input) {
        switch (input) {
            case 'u':
                if (snake.currentDirection != Pt.Direction.DOWN)
                    snake.currentDirection = Pt.Direction.UP;
                break;
            case 'd':
                if (snake.currentDirection != Pt.Direction.UP)
                    snake.currentDirection = Pt.Direction.DOWN;
                break;
            case 'l':
                if (snake.currentDirection != Pt.Direction.RIGHT)
                    snake.currentDirection = Pt.Direction.LEFT;
                break;
            case 'r':
                if (snake.currentDirection != Pt.Direction.LEFT)
                    snake.currentDirection = Pt.Direction.RIGHT;
                break;
        }
    }

    public void updateTail(){

    }
}
