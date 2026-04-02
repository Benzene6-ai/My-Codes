/*#include <iostream>
#include <cmath>

using namespace std;
 int main(){

    double A, B, C;

    cout <<"Enter side A: " << endl;
    cin >> A;
  do{
    cout <<"Enter side B: " << endl;
    cin >> B;
  
    C = sqrt(pow(A,2) + pow(B,2));
  
    (B>A) ? cout <<"Side B cannot be greater than side A" << endl : cout <<"The Hypotheneus is " << C << "CM" << endl;
 
} while(B>A);
      
    return 0;
 }*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Step 1: Declare an empty vector of integers
    std::vector<int> numbers;

    // Step 2: Add the numbers 5, 10, and 15
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Step 3: Print all the elements by iteration
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    // OR USING A FOR -EACH LOOP
    //for (int num : numbers) {
    //cout << num << " ";
    //}

    std::cout << std::endl;
    
    numbers.pop_back();//removes last element
    numbers.pop_back();

    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    for(int num : numbers){
        cout << num <<" ";
    }
    cout <<endl;
   
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        *it+=5 ;
    }
   // cout <<endl;
   for(int num : numbers){
    cout << num <<" ";
}
cout <<endl;

    numbers.clear();//clears the vector
    if(numbers.empty()){
        cout << "The vector is empty!!"<<endl;
    }

    return 0;
}
