#include<iostream>
using namespace std;
int main(){
    float add,sub,mul,div;
    float num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter the operation you want to perform (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ";
    int operation;
    cin >> operation;
    
    if (operation ==1)
    {
        add = num1 + num2;
        cout << "Addition: " << add << endl;
    }
    else if(operation == 2)
    {
        sub = num1 - num2;
        cout << "Subtraction: " << sub << endl;
    }
    else if(operation == 3)
    {
        mul = num1 * num2;
        cout << "Multiplication: " << mul << endl;
    }
    else if(operation == 4)
    {
        if(num2 != 0){
            div = num1 / num2;
            cout << "Division: " << div << endl;
        }
        else{
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else
    {
        cout << "Invalid operation selected." << endl;
    }
    

}