#include<iostream>

using namespace std;

bool isEven(int num){

    return num % 2 == 0;
}
int isOdd(int num){
    return num % 2 != 0;
}
bool isPrime(int num){
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;

}
int main(){

int limit;
int choice;

do{
cout <<endl;
cout <<"Which numbers will you like to list ?"<<endl;
cout <<"1.Even Numbers"<<endl;
cout <<"2.Odd Numbers"<<endl;
cout <<"3.Prime Numbers"<<endl;
cout <<"4.Exit"<<endl;
cin >>choice;

std::cin.clear();
fflush(stdin);

switch(choice){
    case 1: cout <<"Enter the limit: ";
             cin >>limit;
    
        cout <<"Even numbers upto " << limit <<" are: "<<endl;
    
     for(int j = 0; j<= limit; j++){
        if(isEven(j)){
            cout << j << " ";
        }
     }break;
    case 2: cout <<"Enter the limit: ";
            cin >>limit;
    
          cout <<"Odd numbers upto " << limit <<" are: "<<endl;
    
     for(int j = 0; j<= limit; j++){
        if(isOdd(j)){
            cout << j << " ";
        }
     }break;
    case 3: cout <<"Enter the limit: ";
            cin >>limit;
    
            cout <<"Prime numbers upto " << limit <<" are: "<<endl;
    
        for(int j = 2; j<= limit; j++){
        if(isPrime(j)){
            cout << j << " ";
        }
     }break;
    case 4: cout << "Thanks !!"<<endl;
         break;
    default: cout <<"Invalid Choice Entered !!"<<endl;
}

}while(choice != 4);


return 0;

}