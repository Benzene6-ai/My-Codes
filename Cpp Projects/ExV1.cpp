#include<iostream>
#include <vector>
#include<algorithm>//libary for the function sort

using namespace std;

main(){
 vector<int> numbers(7,100);//declares a vector with seven elements all of value 100
 vector<int> numbers1;//declares an empty vector
 vector<int> numbers2 = {20,25,15,10,5};

for(int num : numbers){//for each loop iteration
    cout <<num<<" ";
}
cout <<endl;
      //prints first element   //prints second element
cout <<numbers.front() <<" "<< numbers.back();
 
cout <<endl;
for(int i = 1;i<=10;i++){
    numbers1.push_back(i);//push_back = adds elements to a vector 
   }                      //pop_back = removes the last elemnet form the vector
   for(int num1 : numbers1){
    cout <<num1<<" ";
}
cout <<endl;

for(int i= 0;i <numbers2.size();i++){
    cout<<numbers2[i]<<" ";//index based iteration
}
cout<<endl;
for(int num2 : numbers2){
    cout<<num2<<" ";
}
cout<<endl;
for(vector<int>:: iterator it = numbers2.begin(); it != numbers2.end();it++){//iterator
    cout <<*it<<" ";
}
cout <<endl;
for (int i = numbers2.size() - 1; i >= 0; i--) {//reverse iteration
    cout << numbers2[i] << " ";
}
cout <<endl;
for (auto rit = numbers2.rbegin(); rit != numbers2.rend(); ++rit) {
    cout << *rit << " ";//reverse iterator
}
cout<<endl;
numbers2.insert(numbers2.begin()+2,10);//inseert the number 10 at the index of 10
numbers2.insert(numbers2.begin()+0,2,20);//insert 20 two times at index of 0
numbers2.erase(numbers2.begin()+3);//erases the element at the index of 3
//v.erase(v.begin() + 1, v.begin() + 4);  // Erase elements from index 1 to index 3

for(int num2 : numbers2){
    cout<<num2<<" ";
}
cout<<endl;
sort(numbers2.begin(),numbers2.end());//sortt in ascending order
for(int num2 : numbers2){
    cout<<num2<<" ";
}
cout<<endl;
reverse(numbers2.begin(),numbers2.end());//sort in descending order
for(int num2 : numbers2){
    cout<<num2<<" ";
}cout<<endl;
auto it = find(numbers2.begin(), numbers2.end(), 15);//linear search for the element 15

if (it != numbers2.end()) {
    cout << "Found at index: " << (it - numbers2.begin()) << endl;
} else {
    cout << "Not found" << endl;
}
// Must sort again before binary_search!
sort(numbers2.begin(), numbers2.end());
//binary_search
if (binary_search(numbers2.begin(), numbers2.end(), 10)) {
    cout << "10 is in the vector (binary search)" << endl;
} else {
    cout << "10 not found" << endl;
}

return 0;
}