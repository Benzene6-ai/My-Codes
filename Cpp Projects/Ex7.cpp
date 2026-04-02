#include<iostream>

using namespace std;

double depositMoney();
double withdrawMoney(double balance);
void showBalance(double balance);

int main(){

    double balance = 0;
    int choice = 0; 
 do{
cout <<"*************************************************"<<endl;
cout <<"*                                               *"<<endl;
cout <<"*         WELCOME TO THE COMMERZBANK            *"<<endl;
cout <<"*                                               *"<<endl;
cout <<"*                                               *"<<endl;
cout <<"*************************************************"<<endl;

    cout <<"What would you like to do ?" << endl;
    cout <<"1.Deposit Money ?" << endl;
    cout <<"2.Withdraw Money ?" << endl;
    cout <<"3.Show Balance ?" << endl;
    cout <<"4.Exit !!" <<endl;
    cin >>choice;

    cin.clear();
    fflush(stdin);
 
    switch(choice){
        case 1: balance += depositMoney();
                showBalance(balance);
              break;
        case 2: balance -= withdrawMoney(balance);
                showBalance(balance);
             break;
        case 3: showBalance(balance);
             break;
        case 4: cout <<"Thanks for visiting"<<endl;
              break;
        default: cout <<"Invalid Choice"<<endl;      
}
}while(choice != 4);



return 0;
}
double depositMoney(){
   double amount = 0;

   cout<<"Enter amount to de deposited: ";
   cin >>amount;
   
   if(amount <= 0){
    cout <<"Invalid Amount" <<endl;
    return 0;
    }
   else {
      return amount;
   }

}

double withdrawMoney(double balance){

double amount = 0;
 
cout <<"How much would you like to withdraw ?";
cin >> amount;


if(amount > balance){
    cout<<"Insufficient Funds"<<endl;
    return 0;
}
else if(amount < 0){
    cout<<"That's not a valid Amount"<<endl;
    return 0;
}
else{
return amount;
}
}

void showBalance(double balance){

cout <<"Your balance is " << balance <<"$" <<endl;

}