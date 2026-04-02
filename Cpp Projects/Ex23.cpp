#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Step 1: Declare an empty vector of integers
    std::vector<int> numbers;

    // Step 2: Add the numbers 5, 10, and 15
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

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
   
    for (std::vector<int>::iterator it = numbers.begin() +5; it != numbers.end() +5; it++) {
        cout << *it << " ";
    }
    cout <<endl;

    numbers.clear();//clears the vector
    if(numbers.empty()){
        cout << "The vector is empty!!"<<endl;
    }

    return 0;
}
