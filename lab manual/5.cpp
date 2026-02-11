#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "\nOriginal values: a = " << a << ", b = " << b << endl;
    
    // Technique 1: Using a temporary variable
    {
        int temp = a;
        a = b;
        b = temp;
        cout << "After swap (temp variable): a = " << a << ", b = " << b << endl;
    }
    
    // Technique 2: Using arithmetic operations (addition/subtraction)
    {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "After swap (arithmetic): a = " << a << ", b = " << b << endl;
    }
    
    // Technique 3: Using XOR operation
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        cout << "After swap (XOR): a = " << a << ", b = " << b << endl;
    }
    
    return 0;
}