#include<iostream>

using namespace std;

/*void swap(string &a, string &b){
    string temp;
    temp = a;
    a = b;
    b = temp;
    
}

int main(){

//memeory address is the location in memory where date is stored
//a memeory address can be accessed with &(address-of operator)

string x = "Gloria";
string y ="Rachela";

swap(x,y); 

cout << x << endl;
cout << y;
return 0;

}*/
int main(){
 
//pointers are variables which stores a memory address of another variable.SSometimes it is easier to work with an address.
// & = address-of-operator
// * = derefernce operator

string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza3"};
string *FreePizzas = freePizzas;//no need of using '&' beacuse th array is already a memory address
string name = "Nigga";
string *Name = &name;

cout << Name<< endl;
cout << *Name <<endl;
cout << *FreePizzas<<endl;

return 0;
}
  