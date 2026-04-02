#include<iostream>

using namespace std;

void sort(int array[],int size){
  int temp;
  for(int i = 0; i <size-1;i++){ //controls the number of passes of the entire array
    for(int j = 0;j <size-i-1;j++){ //after the first pass, we don't need to check the last element, because it is already in its correct place.After the second pass, the two largest elements are sorted, and so on.
        if(array[j] > array[j+1]){
            temp = array[j];
            array[j] =  array[j+1];
            array[j+1] = temp;
        }
    }
  }

}

int main() {
    int num1[10]; //= {1,22 , 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 2};
    int num2[10];//= {8,6, 4, 10, 2, 12, 21, 22, 23,19,13, 24, 25, 26,11, 27,15,28};
    int size1 = sizeof(num1)/sizeof(num1[0]);
    int size2 = sizeof(num2)/sizeof(num2[0]);

    for(int i=0; i<size1;i++){
        cout <<"Enter 10 elements for set1. #"<<i+1<<" ";
        cin>>num1[i];
        }
      cout <<endl;  
    for(int j=0; j<size1;j++){
            cout <<"Enter 10 elements for set2. #"<<j+1<<" ";
            cin>>num2[j];
            }
    
    int commonElements[size1];//Array to store the common elements. 
    int count = 0; //variable that keeps track of how many common elements founded so far.
                   //It starts at 0 and is incremented each time we find a common element.
                  //Using commonCount as an index ensures that we're adding each common element to the next available position in the commonElements[] array.

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
                if (num1[i] == num2[j]){ //condition for the commen elements
                    commonElements[count] = num1[i];//store elements in commonElements
                    count++;//increament count by 1 each time a common element is found
                    break;
                
                 } } }
  cout<<endl;
    sort(commonElements,count);
    cout <<"Common Elements are: ";

    for(int i = 0; i<count;i++){
        cout <<commonElements[i]<<" ";
    }

   cout << endl;
    return 0;
}
