#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    
    cout << " **************NUMBER GUESSING GAME*****************" << endl;
    do{
        cout << "Try to guess the number between 1 and 100: " << endl;
        cin >> guess;
        tries++;

        if(guess > 100){
            cout << "NUMBER ENTERED IS OUT OF RANGE!" << endl;
        }
         else if( guess > num){
            cout << "You are too High" << endl;
         }
         else if(guess < num ){
            cout << " You are too low" << endl; 
         }
         else{
            cout << " CONGRATS, YOU GOT THE NUMBER. NUMBER OF TRIALS: " << tries << endl;
         }
     }
    while( guess != num );
        
    cout << "******************************************************" << endl;

    return 0;

}