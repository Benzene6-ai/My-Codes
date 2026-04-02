#include<iostream>

using namespace std;

struct student{ // struct = A structure that gropus related variables under one name
    string name = "Gloria";  //structs can contain many different data types(string,integers,boolean, etc)
    int age;      //Variables in a stuct are known as members
    bool enrolled;// members can be accessed with . "Class  Member Access Operator"
};

template<typename T,typename U>

T money(U euro, T dollars){
    cout<<euro<<" euro"<<endl;
    cout<<dollars<<" dollars"<<endl;

    return 0;
}

void changeStudent(student &stud,string name){//we pass by reference to change the original value and not the value of the copy made by the function
stud.name = name;
//cout <<stud.name;
}
 main(){

student student1;
changeStudent(student1,"Michel");
//student1.name ;
student1.age = 19;
student1.enrolled = true;

student student2;
student2.name;
student2.age = 20;
student2.enrolled = true;

cout<<student1.name<<endl;
cout<<student1.age<<endl;
cout<<student1.enrolled<<endl;

cout<<student2.name<<endl;
cout<<student2.age<<endl;
cout<<student2.enrolled<<endl;

float bankA = 45.13;
int bankB = 50;
char bankC = 'H';
money(bankA,bankC);

return 0;
}