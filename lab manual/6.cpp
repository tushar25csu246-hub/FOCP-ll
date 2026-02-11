#include <iostream>
using namespace std;

int main() {
    int numEmployees;
    float basicSalary, bonus, netSalary;
    const float BONUS_RATE = 0.12;
    
    cout << "Enter number of employees: ";
    cin >> numEmployees;
    
    for (int i = 1; i <= numEmployees; i++) {
        cout << "\nEmployee " << i << ":\n";
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        
        bonus = basicSalary * BONUS_RATE;
        netSalary = basicSalary + bonus;
        
        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
    return 0;
}