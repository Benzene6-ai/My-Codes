#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<vector<int>> matrix(4, vector<int>(4, 0));// A 4x4 matrix filled with 0
   /*for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << "Enter values for a 4x4 matrix:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
    
}