#include<iostream>
#include<ctime>

using namespace std;

char getUserchoice();
char getComputerchoice();
void showChoice(char choice);
void showWinner(char player, char computer);
bool win = false;

int main(){
   
    char player;
    char computer;

do{
cout <<"**********Rock,Paper,Sciscors Game**********";
cout << endl;

player = getUserchoice();
cout <<"You ";
showChoice(player);

cout <<"The Computer ";
computer = getComputerchoice();
showChoice(computer);

showWinner(player, computer);
}while(win != true);

cout <<endl;
cout <<"**********End of the Game*****************"<<endl;

return 0;
}
char getUserchoice(){
   
    char player;
    do{
    cout<<"Choose Between the following;" << endl;
    cout<<"'R' for Rock" << endl; 
    cout<<"'P' for Paper" << endl;
    cout<<"'S' for Sciacors" << endl;

    cin>>player;

   }while( player != 'R'  && player != 'P' && player != 'S');
return player;
}

char getComputerchoice(){
    
    int n;
    srand(time(NULL));
     
    n = (rand() % 3) + 1;

    switch(n){

        case 1: return 'R';

        case 2: return 'P';

        case 3: return 'S';
    }

return n;
}

void showChoice(char choice){

    switch(choice){
        case 'R': cout <<"choosed Rock!"<<endl;
                 break;

        case 'P': cout <<"choosed Paper!"<<endl;
                 break;

        case 'S': cout <<"choosed Sciscors!"<<endl;
                 break;
    }
}

void showWinner(char player, char computer){

    switch (player){
     case 'R': if(computer == 'P'){
            cout <<"Paper takes Rock, You loose !!"<<endl;
        }
        else if( computer == 'S'){
            win = true;
            cout <<"Rock takes sciscors, You win !!"<<endl;
        }
        else{
            cout <<"It's a Tie !!"<<endl;
        } break;

     case 'P': if(computer == 'R'){
        win = true;
            cout <<"Paper takes Rock, You win !!"<<endl;
        }
        else if( computer == 'S'){
            cout <<"Sciscors takes Paper, You loose !!"<<endl;
        }
        else{
            cout <<"It's a Tie !!"<<endl;
        } break;

     case 'S': if(computer == 'P'){
          win = true;
            cout <<"Sciscors takes Paper, You win !!"<<endl;
        }
        else if( computer == 'R'){
            cout <<"Rock takes sciscors, You loose !!"<<endl;
        }
        else{
            cout <<"It's a Tie !!"<<endl;
        } break;
   }

}