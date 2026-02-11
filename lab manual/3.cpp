#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, result;
    
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    

    
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        result = (temperature * 9/5) + 32;
        cout << temperature << "°C = " << result << "°F" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        result = (temperature - 32) * 5/9;
        cout << temperature << "°F = " << result << "°C" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}