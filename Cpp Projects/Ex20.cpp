#include <conio.h>
#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>

using namespace std;
//SNAKEGAME

class Dimensions {
public:
    int x = 1;
    int y = 1;
    int lentgh = 20;
    int width = 30;
    int fruitX;
    int fruitY;
    int score = 0;
    int tailX[100];
    int tailY[100];
    int nTail = 0;
    bool running = true;
    bool gameover = false;

    Dimensions() {
        srand(time(NULL));
        fruitX = rand() % (lentgh - 2) + 1;
        fruitY = rand() % (width - 2) + 1;
    }
};

class Draw : public Dimensions {
public:
    enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN, PAUSE };
    Direction dir = RIGHT; // Default direction
    Direction lastDir = RIGHT; // To store previous direction before pause

    void drawgrid() {
        COORD cursorPos = {1, 1};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPos);

        for (int i = 0; i < lentgh; i++) {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == lentgh - 1 || j == 0 || j == width - 1) {
                    cout << "#"; // Border
                } else if (i == x && j == y) {
                    cout << "O"; // Snake head
                } else if (i == fruitX && j == fruitY) {
                    cout << "F"; // Fruit
                } else {
                    bool isTail = false;
                    for (int k = 0; k < nTail; k++) {
                        if (tailX[k] == i && tailY[k] == j) {
                            cout << "o";
                            isTail = true;
                            break;
                        }
                    }
                    if (!isTail) {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }

        cout << endl;
        cout << "Score: " << score << endl;
     }

    void updateTail(int PrevX, int PrevY) {
        int Prev2X, Prev2Y;
        tailX[0] = PrevX;
        tailY[0] = PrevY;
        for (int i = 1; i < nTail; i++) {
            Prev2X = tailX[i];
            Prev2Y = tailY[i];
            tailX[i] = PrevX;
            tailY[i] = PrevY;
            PrevX = Prev2X;
            PrevY = Prev2Y;
        }
    }

    void playerMove() {
        int PrevX = x;
        int PrevY = y;

        if (_kbhit()) {
            char ch = _getch();

            if (ch == 27) {
                running = false; // ESC to exit
            } else if (ch == 'p' || ch == 'P') {
                if (dir != PAUSE) {
                    lastDir = dir;
                    dir = PAUSE;
                } else {
                    dir = lastDir;
                }
            } else if (ch == 0) { // Arrow keys
                char arrowKey = _getch();
                if (dir != PAUSE) {
                    switch (arrowKey) {
                        case 72: dir = UP; break;
                        case 80: dir = DOWN; break;
                        case 75: dir = LEFT; break;
                        case 77: dir = RIGHT; break;
                    }
                }
            }
        }

        if (dir != PAUSE) {
            switch (dir) {
                case UP: x--; break;
                case DOWN: x++; break;
                case LEFT: y--; break;
                case RIGHT: y++; break;
                default: break;
            }

            updateTail(PrevX, PrevY);

            // Wall collision
            if (x <= 0 || x >= lentgh - 1 || y <= 0 || y >= width - 1) {
                running = false;
                gameover = true;
            }

            // Self-collision
            for (int i = 0; i < nTail; i++) {
                if (tailX[i] == x && tailY[i] == y) {
                    running = false;
                    gameover = true;
                }
            }

            // Fruit collection
            if (x == fruitX && y == fruitY) {
                score += 10;
                fruitX = rand() % (lentgh - 2) + 1;
                fruitY = rand() % (width - 2) + 1;
                nTail++;
                tailX[nTail - 1] = x;
                tailY[nTail - 1] = y;
            }
        }
    }

    void difficulty(int score, int &delay) {
        if (score >= 50) delay = 250;
        if (score >= 100) delay = 200;
        if (score >= 350) delay = 100;
        if (score >= 500) delay = 25;
    }
};

int main() {
    Draw Grid;
    int delay = 300;

    while (Grid.running) {
        Grid.playerMove();
        Grid.drawgrid();
        Grid.difficulty(Grid.score, delay);
        Sleep(delay);
    }

    if (Grid.gameover) {
        cout << "Gameover !" << endl << endl;
        cout << "Final Score: " << Grid.score << endl;
    }

    return 0;
}
 