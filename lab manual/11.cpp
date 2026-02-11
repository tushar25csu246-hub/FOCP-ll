#include<iostream>
using namespace std;
int main(){
    int quantity;
    int price;
    int discount_price;
    cout << "Enter order quantity: ";
    cin >> quantity;
    cout << "Enter price of Item: ";
    cin >> price;
    if(quantity>1000){
        discount_price = price - (0.1 * price);
        cout << "Discounted Price is: " << discount_price*quantity << endl;
    }
    else{
        cout << "No Discount applicable. Price is: " << price*quantity << endl;
    }
    return 0;
}