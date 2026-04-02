#include <iostream>
/*#include <ctime>

using namespace std;

int main(){

srand(time(NULL));
 int num = (rand() % 100) + 1;
 int guess;

 cout <<"***********NUMBER GUESSING GAME**********"<<endl;
 cout <<endl;

 do{
 cout <<"Guess a number between 1 and 100"<<endl;
 cin>>guess;

 if(guess > num){
    cout <<"You are too high"<<endl;
 }
 else if(guess < num){
    cout <<"You are too low"<<endl;
 }
 else{
    cout <<"Congrots You got the Number !!"<<endl;
 }}while(guess !=num);
cout <<"*****************************************"<<endl;
 return 0;

}
using namespace std;

bool isEven(int num){
return   num % 2 == 0; ;
}

bool isOdd(int num){
    return num % 2 != 0;
}

int main(){
   int limit;
   cout << "Enter a limit"<<endl;
   cin>>limit;
cout <<"Even numbers upto "<<limit<<" are: ";
   for(int i = 1; i <= limit; i++){
    if(isEven(i)){
        cout << i << " ";
    }
   }
   cout <<endl;
   cout <<"Odd numbers upto "<<limit<<" are: ";
   for(int i = 1; i<= limit; i++){
     if(isOdd(i)){
        cout << i << " ";  
     }
   }
   cout <<endl;

   return 0;
}*/
using namespace std;

class setofNumbers{
public:

int limit;

bool isOdd(int num){
    return num % 2 != 0;
}

bool isEven(int num){
    return num % 2 == 0;
}
};

int main(){

    setofNumbers set1;
    cout <<"Enter a limit"<<endl;
    cin >> set1.limit;
    cout <<"Odd numbers upto "<<set1.limit<<" are: ";
    for(int i = 1; i<= set1.limit; i++){
      if(set1.isOdd(i)){
         cout << i << " ";  
      }
    }
    cout <<endl;

    cout <<"Even numbers upto "<<set1.limit<<" are: ";
    for(int i = 1; i<= set1.limit; i++){
      if(set1.isEven(i)){
         cout << i << " ";  
      }
    }
    cout <<endl;

return 0;
}

