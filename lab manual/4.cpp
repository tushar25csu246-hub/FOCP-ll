#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, totalBill;
    
    cout << "Enter Item No.: ";
    cin >> itemNo;
    
    cout << "Enter Quantity: ";
    cin >> quantity;
    
    cout << "Enter Unit Price: ";
    cin >> unitPrice;
    
    amount = quantity * unitPrice;
    
    discount = amount * 0.20;
    totalBill = amount - discount;
    
    cout << "\n--- Bill Details ---" << endl;
    cout << "Item No.: " << itemNo << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Unit Price: " << unitPrice << endl;
    cout << "Amount: " << amount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Total Bill: " << totalBill << endl;
    
    return 0;
}