#include <iostream>

using namespace std;

int main(){
char guess;
int score;
    string Questions[] = {"1.Who is the first president of camrroun ?", 
                          "2.Who is the second president of Cameroun ?",
                          "3.Who will be the next president of Cameroon ?",
                          "4.Who is the president of France ?",
                           "5.Who is the President of America ?"};

    string answers[][3] = {{"A.Paul Biya","B.Amahdou Ahidjo","C.Nii John Frundi"},
                           {"A.Paul Biya","B.Cabral libi","C.Nii John Frundi" },
                           {"A.Paul Biya","B.Maurice Kamto","C.Joshua Osi"},
                           {"A.Holand","B.Lepen","C.Macron"},
                           {"A.Obama","B.Kenedy","C.Trump"}};

    char solution[] = {'B', 'A', 'B','C','C'};
    int size = sizeof(Questions)/sizeof(Questions[0]);

       for(int i=0; i <size; i++){
            cout <<"************************************"<<endl;
            cout << Questions[i] <<endl;
            cout <<"************************************"<<endl;

        for(int j=0; j<sizeof(answers[i])/sizeof(answers[i][0]); j++){
                cout<<answers[i][j]<<" "<<endl;
            }
           cin >>guess;
           guess = toupper(guess);

           if(guess == solution[i]){
            cout << "Correct!"<<endl;
            score++;
           }
           else{
            cout <<"Wrong !The Answer is: "<<solution[i]<<endl;
           }
        }
        cout<<endl;
        cout<<"******************************************"<<endl;
        cout <<"From "<<size<<" Questions,"<<"You got "<<score<<" Questions Correct"<<endl;
        cout <<"Your score is "<<(score/(double)size)*100 <<"%"<<endl;
        
        if(((score/(double)size)*100) <50 ){
            cout <<"You failed the Test !"<<endl;
        }else{
            cout <<"Congrats ! You passed the Test !!"<<endl;
        }
       
       return 0;                  

}