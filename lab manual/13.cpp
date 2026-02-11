#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter coefficients of quadratic equation (ax² + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;   
    cout << "c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "Error: 'a' cannot be zero for a quadratic equation." << endl;
        return 1;
    }
    
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two distinct roots:" << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "One repeated root:" << endl;
        cout << "Root: " << root << endl;
    } 
    else {
        cout << "No real roots (discriminant is negative)" << endl;
    }
    

    return 0;
}
