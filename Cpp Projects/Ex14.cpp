#include <iostream>
#include <random>

using namespace std;

int main() {
    // Create a random number generator
    random_device rd;  // Obtain a seed from the hardware
    mt19937 gen(rd()); // Initialize the random number generator
    uniform_int_distribution<> dis(0, 35); // Distribution range for letters (A-Z or a-z)

    const int array_size = 10; // Number of random characters to generate
    char random_chars[array_size];  // Declare an array to store random characters
    
    // Generate random characters and store them in the array
    for (int i = 0; i < array_size; ++i) {
        char random_char;
        if (dis(gen) < 26) {
            random_char = 'A' + dis(gen);  // Letters A-Z
        } else {
            random_char = '0' + (dis(gen) - 26);  // Digits 0-9
        }
        // Generate a random character from A-Z
        random_chars[i] = random_char;      // Store the random character in the array
    }

    // Output the generated random characters
      cout << "Suggested password: ";
    for (int i = 0; i < array_size; ++i) {
      cout << random_chars[i]; // Print each character
    }
      cout << std::endl;

    return 0;
}



