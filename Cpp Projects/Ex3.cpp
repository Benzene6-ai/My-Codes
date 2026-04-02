#include <iostream>
#include <cmath>

using namespace std;
 int main(){

char op;
double num1;
double num2;
double result;

cout << "*************MINI CALCULATOR*************" << endl;

cout << "Enter num1: " << endl;
cin >> num1;

cout << "Enter num2: " << endl;
cin >> num2;

do{
cout <<"Choose an operator; +,-,* or /" << endl;
cin >> op;


switch(op){
    case '+':
    result = num1 + num2;
    cout <<"The sum of the two numbers is: " << result << endl;
    break;

    case '-':
    result = num1 - num2;
    cout <<"The difference of the two numbers is: " << result << endl;
    break;

    case '*':
    result = num1 * num2;
    cout <<"The product of the two numbers is: " << result << endl;
    break;

    case '/':
    result = num1 / num2;
    cout <<"The division of the two numbers is: " << result << endl;
    break;

    default:
    cout <<"The operator you entered is invalid!" << endl;
    break;

}
}while(op != '+' && op != '*' && op != '/' && op != '-');

 cout <<"******************************************" << endl;

 return 0;


 }