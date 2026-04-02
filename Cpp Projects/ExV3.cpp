#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vector1= {5,10,10,10,15,20};
    vector<int> vector2 = {100,200};

   cout <<"Original Vector1: ";
   for(int num : vector1){
    cout<<num<<" ";
   }
   cout<<endl;
   cout <<"Original Vector2: ";
   for(int num : vector2){
    cout <<num<<" ";
   }
   cout<<endl;
    vector1.insert(vector1.begin()+1,20);
    vector1.erase(vector1.begin()+3);

   vector1.resize(6);
   vector1.swap(vector2);

   cout <<"swaped Vector1: ";
   for(int num : vector1){
    cout<<num<<" ";
   }
   cout <<endl;
   cout<<"swaped Vector2: ";
   for(int num : vector2){
    cout<<num<<" ";
   }
   cout<<endl;
   int c = count(vector2.begin(),vector2.end(),10);
   cout <<"10 appears "<<c<<" times"<<endl;

   sort(vector2.begin(),vector2.end());
   bool found = binary_search(vector2.begin(),vector2.end(),10);
   if(found){
    cout <<"Element is found in the vector"<<endl;
   }else{
    cout <<"Element is not found in the vector"<<endl;
   }

   return 0;
}