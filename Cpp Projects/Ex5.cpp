#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << " are: ";
    for (int j = 2; j <= limit; j++) {
        if (isPrime(j)) {
            cout << j << " ";
    }
    }
    //cout << endl;//
    return 0;
}
// C++ program to print the prime number from
// 1 to n using trial division approach
/*#include <iostream>

using namespace std;

bool isPrime(int n) {
  
    // Since 1 is not prime return false
    if (n == 1 )
        return false;

    // Check divisiblity with all number in
      // range [2, n - 1]
    for (int i = 2; i < n; i++) {
      
        // If the n is divisible by i,
        if (n % i == 0)
            return false;
    }
  
      // If no divisor is found
      return true;
}

int main() {
    int n;
    cout <<"Enter a limit: ";
    cin >> n;


    // Check every number from 1 to n
    for (int i = 1; i <= n; i++) {

        // Check if current number is prime
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}*/

