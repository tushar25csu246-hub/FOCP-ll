#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of sales entries: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive number of entries." << endl;
        return 1;
    }
    
    int maxSales = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        int sales;
        cout << "Enter sales figure " << (i + 1) << ": ";
        cin >> sales;
        
        if (sales > maxSales) {
            maxSales = sales;
        }
    }
    cout << "\nLargest sales figure: " << maxSales << endl;
    
    return 0;
}