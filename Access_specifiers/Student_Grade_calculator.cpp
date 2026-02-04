// 4 Feb 2026

/*
Student Grade Calaculator
A teacher wants to compute grades based on marks
Class: StudentResult
Data members: name marks
Member Functions:
    calculateGrade():
        - Marks>=90 grade a
        - 75-89 grade b
        - 60-74 grade c
        - <60 grade d

Task: design the class and write a program to test it
*/

#include <iostream>
using namespace std;

class StudentResult {
private:
    string name;
    int marks;

public:
    void inputDetail() {
        cout << "Enter name and marks: ";
        cin >> name >> marks;
    }

    void calculateGrade() {
        cout << "\nName: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 90)
            cout << "Grade: A" << endl;
        else if (marks >= 75)
            cout << "Grade: B" << endl;
        else if (marks >= 60)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: D" << endl;
    }
};

int main() {
    StudentResult s;
    s.inputDetail();
    s.calculateGrade();
    return 0;
}
