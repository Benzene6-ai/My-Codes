#include <iostream>
using namespace std;

class Palindrome_Check{
public:

bool end_it = true;

void is_Palindrome(string word) {
    // Print characters forward
    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << " ";
    }
    cout << endl;
 // Print characters in reverse
    for (int j = word.length() - 1; j >= 0; --j) {
        cout << word[j] << " ";
    }
    cout << endl;
 // Check for palindrome
    bool isPalindrome = true;
    for (int i = 0; i < word.length() / 2; i++) {
        if (word[i] != word[word.length() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << word << " is a Palindrome" << endl;
    } else {
        cout << word << " is not a Palindrome" << endl;
    }
}
bool Palindrome(string word){
    for (int i = 0; i < word.length() / 2; i++) {
        if (word[i] != word[word.length() - 1 - i]) {
            cout << word << " is not a Palindrome" << endl;
            return false;
        }
    }
    cout << word << " is a Palindrome" << endl;
    end_it = false;
    return true;
}
};
int main() {
    Palindrome_Check User;
    while(User.end_it){
    string input;
    cout << "Enter a word to check if it's a Palindrome:  ";
    cin >> input;

  User.Palindrome(input);
}
    return 0;
}
