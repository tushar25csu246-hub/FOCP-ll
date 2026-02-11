#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, totalAmount, discount, finalAmount;

    cout << "Enter item number: ";
    cin >> itemNo;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    totalAmount = quantity * unitPrice;
    discount = totalAmount * 0.20;
    finalAmount = totalAmount - discount;

    cout << "\n--- BILL DETAILS ---" << endl;
    cout << "Item Number: " << itemNo << endl;
    cout << "Total Amount: " << totalAmount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Payable Amount: " << finalAmount << endl;

    return 0;
}

