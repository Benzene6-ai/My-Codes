#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    /*vector<vector<int>> matrix(3,vector<int>(3,0));//3 rows, 4 columns, all values = 0
    matrix[0][0] = matrix[1][1]= matrix[2][2] = 1;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/
        int students;
        cout << "Enter number of students: ";
        cin >> students;
    
        vector<vector<int>> marksheet;
    
        for (int i = 0; i < students; i++) {
            int subjects;
            cout << "Enter number of subjects for student " << i + 1 << ": ";
            cin >> subjects;
    
            vector<int> marks;
    
            cout << "Enter marks for " << subjects << " subjects: ";
            for (int j = 0; j < subjects; j++) {
                int mark;
                cin >> mark;
                marks.push_back(mark);
            }
    
            marksheet.push_back(marks); // Add this student's row to the 2D vector
        }
    
        cout << "\nStudent Marks:\n";
        for (int i = 0; i < marksheet.size(); i++) {
            cout << "Student " << i + 1 <<" Marks: ";
            int total = accumulate(marksheet[i].begin(),marksheet[i].end(),0);
            for (int mark : marksheet[i]) {
                cout << mark << " ";
            }
            cout<<" Total: " <<total<<endl;
            //cout << endl; 
        }
    
        return 0;
    }
    
