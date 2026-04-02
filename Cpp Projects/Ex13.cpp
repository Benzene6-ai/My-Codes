#include<iostream>

using namespace std;

string English_translator(string A[],string B[],int size,string choice){
   string translation;
    for(int i= 0; i<size;i++){
    
   if(choice == A[i] ){
    translation = B[i];
    break; }  }
return translation;
}

string French_translator(string A[],string B[],int size,string choice){
    string translation;
     for(int i= 0; i<size;i++){
     
    if(choice == B[i] ){
     translation = A[i];
     break; }  }
 return translation;
 }

int main(){
    string English[] = {"Good Morning", "Good afternoon","Good evening","I am hungry","I am 21 years old"};
    string French[] = {"Bonjour","Bonne Apres midi", "Bonsoir","J'ai faim","J'ai 21 ans"};
    string choice;
    string translation; 
    int sizeA = sizeof(English)/sizeof(English[0]);
    int options;
  do
  {
    cout <<"**************TRANSLATOR**************"<<endl;
    cout <<endl;
    cout <<"What will you like to do ?"<<endl;
    cout <<"1.Translate into English"<<endl;
    cout <<"2.Translate into French"<<endl;
    cout <<"3.Exit"<<endl;
    cin >>options;
    cin.ignore(); 
  
    switch (options) {

    case 1:  
    cout << "What will you like to translate into English?: " << endl;
    getline(cin, choice);

    if (choice.empty()) {
        cout << "You didn't enter anything" << endl;
        break;
    }

    translation = French_translator(English, French, sizeA, choice);

    if (translation.empty()) {
        cout << "Word not found" << endl;
    } else {
        cout << "\nTranslation in English is: " << translation << endl;
    }
    break;

    case 2: 
    cout << "What will you like to translate into French?: " << endl;
    getline(cin, choice);

    if (choice.empty()) {
        cout << "You didn't enter anything" << endl;
        break;
    }

    translation = English_translator(English, French, sizeA, choice);

    if (translation.empty()) {
        cout << "Word not found" << endl;
    } else {
        cout << "\nTranslation in French is: " << translation << endl;
    }
    break;

    case 3:
     cout <<"Thanks for visiting/Merci pour la visite"<<endl;
     break;

    default:
       cout <<"Invalid choice!"<<endl;
    } 
  } 
  while (options != 3);
  cout<<endl;
  cout<<"******************************************"<<endl;
  
    
return 0;
}