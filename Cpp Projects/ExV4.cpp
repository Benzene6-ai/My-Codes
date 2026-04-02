#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Students { 
    string name;
    int marks;
};

bool compareBymarks(Students stud1,Students stud2){
    return stud1.marks > stud2.marks;
}
bool compareByName(const Students& a, const Students& b) {
    return a.name < b.name; // A-Z order
}
int main(){

    vector<Students> Student = {
        {"Bob",80},
        {"Sandy",85},
        {"Patrick",90}
    };

    sort(Student.begin(),Student.end(),compareByName);

    cout << "Students sorted by marks (descending):\n";
    for (const auto& s : Student) {
        cout << s.name << " - " << s.marks << endl;
    }

    return 0;
}

