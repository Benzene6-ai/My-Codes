#include <iostream>
#include <cmath>

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
 
/*int num;
 cout << "Enter a Number: ";
 cin >> num;

 ((num % 2) == 0) ? cout << " The number is even" << endl : cout << " The number is odd" << endl;

return 0;*/

int array1[5];
int size1 = sizeof(array1)/sizeof(array1[0]);
int array2[5];
int size2 = sizeof(array2)/sizeof(array2[0]);

for(int i=0; i<size1;i++){
cout <<"Enter 5 elements for set1. #"<<i+1<<" ";
cin>>array1[i];
}

cout<<endl;
cout<<"The elements for set1 are: {";
sort(array1,size1);
for(int i=0;i<size1;i++){
    cout<<array1[i]<<" ";
}

cout<<"}";
cout<<endl;

for(int j=0; j<size2;j++){
    cout <<"Enter 5 elements for set2. #"<<j+1<<" ";
    cin>>array2[j];
    }

    cout<<"The elements of set2 are: {";
    sort(array2,size2);
    for(int j=0;j<size2;j++){
        cout<<array2[j]<<" ";
    }

   cout<<"}";
   cout<<endl;
   cout<<endl;
    cout<<"The common elements of both set1 and 2 are: {";
 
 for(int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
     if(array1[i] == array2[j]){
            cout<<array1[i]<<" ";
         }}}
    cout<<"}";
return 0;
}