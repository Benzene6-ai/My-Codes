public class Mainsnake{
    public static void main(String[] args) throws InterruptedException {
        Pt snake = new Pt();
        Grid grid = new Grid(snake);

        // Input listener thread
        Thread inputThread = new Thread(() -> {
            try {
                while (true) {
                    int key = System.in.read();
                    switch (key) {
                        case 'u': grid.changeDirection('u'); break;
                        case 'd': grid.changeDirection('d'); break;
                        case 'l': grid.changeDirection('l'); break;
                        case 'r': grid.changeDirection('r'); break;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        });
        inputThread.setDaemon(true); // So it exits with main thread
        inputThread.start();

        // Game loop
        while (snake.running) {
            grid.playerMove();
            grid.printGrid();
            Thread.sleep(200); // adjust speed
        }
        if(snake.gameover){
            System.out.println();
            System.out.println("Game Over !!");
            System.out.println("Final score: " + snake.score);
        }
    }
}
