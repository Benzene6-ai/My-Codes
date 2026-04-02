#include <iostream>

using namespace std;

/*double getTotal(double prices[], int size);
   
int main(){

    double prices[] = {110,299,455,667,567};
    int size = sizeof(prices)/sizeof(prices[0]);

    double total = getTotal(prices,size);

    cout <<"The Total is "<< total <<"$";
  
return 0;
}
double getTotal(double prices[],int size){
    
    double total = 0;

    for(int i=0; i < size; i++){
    total += prices[i];
    //for(string student : students){ //foreach loop
 }
   return total;
}*/

/*int searchArray(int array[], int size, int element);

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout <<"Enter the number you want to search for ";
    cin >> myNum;
    
    index = searchArray(numbers,size,myNum);
    if(index != -1){
        cout << myNum <<" is at index " <<index;
    }else{
        cout << myNum<< " is not in the Array";
    }
    return 0;
}

int searchArray(int array[], int size, int element){
    for(int i=0; i<size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}*/
int main(){
int rows;
int columns;

    string cars[][4] = {{"Avensis","Corola","Corona","Carina"},
                        {"Benz","F24","Gt","AUTO"},
                        {"Ford","Lexus","Mustang","Motorola"}};  
    
     rows = sizeof(cars)/sizeof(cars[0]);                
      columns =sizeof(cars[1])/sizeof(cars[1][1]);
     
      for(int i=0; i<rows;i++ ){
        for(int j=0; j<columns;j++){
        cout <<cars[i][j] <<" "; 
     }
      cout<<endl;
     }             
}
