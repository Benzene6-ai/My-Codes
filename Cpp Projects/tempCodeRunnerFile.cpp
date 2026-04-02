#include <conio.h>
#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>

using namespace std;

class Dimensions{
    public:
    int x = 10;
    int y = 10;
    int lentgh = 20;
    int width = 20;
    int fruitX;
    int fruitY;
    int score = 0;
    int tailX[100];
    int tailY[100];
    int nTail = 0;
    bool running = true;
    bool gameover = false;

    Dimensions(){
        srand(time(NULL));

        fruitX = rand() %(lentgh-2) + 1;
        fruitY = rand() %(width-2) + 1;
    }
};
class Draw : public Dimensions{
 public:
    void drawgrid(){
    
        COORD cursorPos = {1, 1};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPos);
        
    
    for(int i = 0;i < lentgh;i++){
    for(int j = 0;j < width; j++){
        if (i == 0 || i == lentgh - 1 || j == 0 || j == width - 1) {
            cout << "#"; // Top or bottom border     // If we're on the first or last column (j == 0 or j == length - 1)
        }
    else if (i == x && j == y){
        cout <<"O";
    }
    else if (i == fruitX && j ==  fruitY) {
        cout << "F"; // Print fruit
    }
     // Else, we're inside the grid, so print a space
        else {
            bool isTail = false;
            for(int k = 0; k<nTail;k++){
                if(tailX[k] == i && tailY[k] == j){
                    cout<<"o";
                    isTail = true;
                    break;
                }
            }
            if(!isTail){
            cout << " ";
        }
      } 
    }
        cout <<endl;
 }
   cout <<endl;
   cout <<"Score: "<<score;
}

  void updateTail(int PrevX,int PrevY){
    int Prev2X,Prev2Y;
     tailX[0] = PrevX;
     tailY[0] = PrevY;
    for(int i=1;i<nTail;i++){
       Prev2X = tailX[i];
       Prev2Y = tailY[i];
        tailX[i] = PrevX;
        tailY[i] = PrevY;
        PrevX = Prev2X;
        PrevY= Prev2Y;

               }}
void playerMove(){
         int PrevX = x;
         int PrevY = y;

        if (_kbhit()) { // Check if a key is pressed
            char ch = _getch(); // Get the pressed key
            
            if (ch == 27) { // Escape key
                running = false;
            } else if (ch == 0 ) { // Special key prefix
                char arrowKey = _getch(); // Get the actual arrow key code
                switch (arrowKey) {
                    case 72: // Up arrow
                         x--; break;
                    case 80: // Down arrow
                        x++;break;
                    case 75: // Left arrow
                        y--;break;
                    case 77: // Right arrow
                        y++;break; } 
            }  } 
            updateTail(PrevX,PrevY);
                 if (x <= 0 || x >= lentgh - 1 || y <= 0 || y >= width - 1) {
                        running = false;
                        gameover = true;
            }if (x == fruitX && y == fruitY) {
                score+=10;
                fruitX = rand() % (lentgh - 2) + 1;
                fruitY = rand() % (width - 2) + 1;
                nTail++;
                }
                
            }
         };
            

int main() {

Draw Grid;

while(Grid.running){
Grid.drawgrid();
Grid.playerMove();
Sleep(10);
}
if(Grid.gameover){
    cout <<"Gameover !"<<endl<<endl;
    cout<<"FinalScore: " <<Grid.score<<endl;
}
return 0;
}