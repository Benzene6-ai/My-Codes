#include<iostream>

using namespace std;

int isHamming(int number) {
    // Divide the number by 2, 3, or 5 until it is no longer divisible
    while (number % 2 == 0) number /= 2;
    while (number % 3 == 0) number /= 3;
    while (number % 5 == 0) number /= 5;
    
    // If the remaining number is 1, it's a Hamming number
    
    return number == 1;
    }
int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Hamming numbers up to " << limit << " are: " << endl;
    for (int i = 1; i <= limit; i++) {
        if (isHamming(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
