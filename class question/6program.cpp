#include <iostream>
using namespace std;

int main() {
    int n;
    float basicSalary, bonus, netSalary;

    cout << "Enter number of employees: ";
    cin >> n;

    cin.ignore(); // Clear the input buffer
    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basicSalary;

        bonus = basicSalary * 0.12;
        netSalary = basicSalary + bonus;
        cout << "Employee " << i << " Salary Details:" << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        
        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
    return 0;
}
    