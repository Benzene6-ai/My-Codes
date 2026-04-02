#include <iostream>
#include<ctime>
#include <iomanip>

using namespace std;

void drawboard(char *spaces){
cout << endl;
cout << "               |     |     "<<endl;
cout << "            "<< spaces[0]<<"  |  "<< spaces[1]<<"  |   "<< spaces[2]<<"  "<<endl;
cout << "               |     |     "<<endl;
cout << "          -----------------"<<endl;
cout << "               |     |     "<<endl;
cout << "            "<< spaces[3]<<"  |  "<< spaces[4]<<"  |   "<< spaces[5]<<"  "<<endl;
cout << "               |     |     "<<endl;
cout << "          -----------------"<<endl;
cout << "               |     |     "<<endl;
cout << "            "<< spaces[6]<<"  |  "<< spaces[7]<<"  |   "<< spaces[8]<<"  "<<endl;
cout << "               |     |     "<<endl;
}
void playerMove(char *spaces, char player){
int choice;
do{
cout << "Enter a spot for a marker betwenn 1-9"<<endl;
cin >> choice;
choice--;
if(spaces[choice] == ' '){
    spaces[choice] = player;
    break;
}
}while(!choice > 0 || !choice< 8);
}
void computerMove(char *spaces, char computer){
 srand(time(NULL)) ;
 while(true){
 int number = (rand() % 9) + 1;
 if(spaces[number] == ' '){
    spaces[number] = computer;
 }
 break;
}

}
bool checkWinner(char *spaces,char player,char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? cout <<"You win\n" : cout <<"You Lose\n";
    }
    else{
        return false;
    }

    return true;
}
bool checkTie(char *spaces){
    for(int i=0;i<9;i++){
        if(spaces[i] = ' '){
            return false;
        }
    }
    cout << "It's a Tie"<<endl;
    return true;
}

int main(){

char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
char player = 'X';
char computer = 'O';
drawboard(spaces);

bool running = true;
while(running){
    playerMove(spaces,player);
     drawboard(spaces);
     if(checkWinner(spaces,player,computer)){
        running = false;
        break;
    }else if(checkTie(spaces)) {
        running = false;
        break;
    }

    computerMove(spaces,computer);
    drawboard(spaces);

    if(checkWinner(spaces,player,computer)){
        running = false;
        break;
    }else if(checkTie(spaces)){
        running = false;
        break;
    }
}


return 0;
}



