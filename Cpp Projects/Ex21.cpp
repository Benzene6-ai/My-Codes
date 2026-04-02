#include<iostream>

using namespace std;

class AbstractHuman {
  virtual void reproduce() = 0;//Abstraction = Creating an abstract class with a specific function with wwhcih any other class must operate when accessing to this class
};

class Human : AbstractHuman{ //OOP(Object Oriented Programming) = Attempt to represent real objects using codes
    public:  // Public access modifier

    string name;  // attributes or characteristics of the class
    string occupation;
    int age;

    //actions the class can perform
    void eat(){
        cout<<name<<" is eating"<<endl;
    }
    void drink(){
        cout<<name<<" is drinking"<<endl;
    }
    void sleep(){
        cout<<name<<" is sleeping"<<endl;
    }
    void reproduce(){
      cout <<"All Humans must reproduce!!"<<endl;
    }
};

class Car{
public:
string make;
string model;
int year;
string colour;
int speed;

Car(string make, string model,int year,string colour,int speed){ //Constuctor = calling a class within itself and assigning it's attributes as arguments
                                                        //this will automatically assign the attributes when the constructor will be called in the main function.
    this->make = make;
    this->model = model;
    this->year = year;
    this->colour = colour;
    this->speed = speed;
  }

  void acceleration(){
cout<<"The "<<make<<" "<<model<<" has an Acceleration of " <<speed<<"km per hour"<<endl;
  }
   };

  class Oven{
  private: //private access modifier(Encapsulation) = permits that the attributes can not be accessed out of this class
 
  int temperature = 15;
public:
Oven(int temperature){
settemperature(temperature);//a setter can also be called within a constuctor
}
  int gettemperature(){ //getter = a function which makes a private class readable
    return temperature;
  }
  void settemperature(int temperature){// setter = a function which makes a private attribute writable
    this->temperature = temperature;
    if(temperature < 0){
       this-> temperature = 0;
    }
    else if(temperature >15){
        this-> temperature = 15;
    }
    else{
        this->temperature = temperature;
    }

  }; 
};
//Parent class/super class 
class Shape{//Inheritance
    public:
  double area;
  double volume;
};
//Childclass/subclass
class Cube : public Shape{//the class Cube will now inherite from the attributes of the class Shape
    public:                     //this avoids repetition when writing code 
    double side;
 Cube(double side){
    this->side = side;
    this->area = side * side * 6;
    this->volume = side * side * side;
 }
};


   int main(){

    Human human1;

    human1.name = "Roy";
    human1.occupation = "Alchemist";
    human1.age = 70;

    cout << human1.name<<'\n';
    cout << human1.occupation<<'\n';
    cout << human1.age<<'\n';

    human1.eat();
    human1.sleep();
    human1.reproduce();

    cout <<endl;

    Car car1("Ford","Mustang",2021,"Yellow",300);

    cout << car1.make<<endl;
    cout <<car1.model<<endl;
    cout <<car1.year<<endl;
    cout <<car1.colour<<endl;

    car1.acceleration();
cout <<endl;
    Oven oven1(-29);
    //oven1.settemperature(10000);
cout <<"The temperature setting is " << oven1.gettemperature()<<endl;

cout <<endl;
Cube cube1(10);
cout<<cube1.area<<"cm2"<<endl;
cout<<cube1.volume<<"cm3"<<endl;
    return 0;
} 