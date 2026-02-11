#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of events (N): ";
    cin >> n;
    
    cout << "\nEvent Tags:\n";
    for (int i = 1; i <= n; i++) {
        
        if (i % 15 == 0) {
            cout << i << ": Buzz Fuzz\n";
        } else if (i % 3 == 0) {
            cout << i << ": Buzz\n";
        } else if (i % 5 == 0) {
            cout << i << ": Fuzz\n";
        } else {
            cout << i << ": No tag\n";
        }
    }
    
    return 0;
}