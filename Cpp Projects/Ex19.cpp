#include<iostream>

using namespace std;
//enums = a user-defined data type that consists of paired named-integer constants.
//Great if you have a set of potential options.
enum Day{monday,tuesday,wednesday,thursday,friday,saturday,sunday};

int main(){

Day choice = sunday;
//cout<<"Enter a day of the week"<<endl;
//getline(cin,choice);

switch(choice){
    case monday:
    cout<<"It is sunny"<<endl;
    break;
    case tuesday:
    cout<<"It is rainy"<<endl;
    break;
    case wednesday:
    cout<<"It is humid"<<endl;
    break;
    case thursday:
    cout<<"It is wolky"<<endl;
    break;
    case friday:
    cout<<"It is dry"<<endl;
    break;
    case saturday:
    cout<<"It is amazing"<<endl;
    break;
    case sunday:
    cout<<"It is hot"<<endl;
    break;
    default:
    cout<<"Invalid day"<<endl;
}
return 0;
}