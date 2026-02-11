#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, average;

    cout << "Enter marks of student 1: ";
    cin >> marks1;

    cout << "Enter marks of student 2: ";
    cin >> marks2;

    cout << "Enter marks of student 3: ";
    cin >> marks3;

    average = (marks1 + marks2 + marks3) / 3;

    cout << "\n--- CLASS PERFORMANCE ---" << endl;
    cout << "Student 1 Marks: " << marks1 << endl;
    cout << "Student 2 Marks: " << marks2 << endl;
    cout << "Student 3 Marks: " << marks3 << endl;
    cout << "Average Marks: " << average << endl;
    return 0;
}