#include <iostream>
#include <iomanip>  // For std::setw

using namespace std;
int main() {
    int height; 
    cout <<"What is the height of your shape?";
    cin>>height;

    char symbol;
    cout <<"What symbol do you want to use ? ";
    cin>>symbol;

    // Print the shape top (pyramid part)
  for (int i = 1; i <= height; i++) {
        // Print leading spaces to center the part
        cout << setw(height - i + 45);
        
        // Print the symbol for each level
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << symbol;
        }

        cout << endl;
    }

   for (int i = height; i <= height && i > 0 ; i--) {// set i to the given height and decreament to revese the fist pyramid
    cout << setw(height - i + 45);
    
    // Print the symbol for each level
    for (int j = 0; j < (2 * i - 1); j++) {
        cout << symbol;
    }
 cout << endl;
}
 return 0;
}
