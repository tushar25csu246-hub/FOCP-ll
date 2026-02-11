#include <iostream>
using namespace std;
int main(){

int num1,num2;
    int sum,diff,prod,divi;
    cout<<"Enter number 1";
    cin>>num1;

    cout<<"Enter number 2";
    cin>>num2;
    
    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    divi=num1/num2;

    cout<<"Sum is"<<sum<<"\n";
    cout<<"Difference is"<<diff<<"\n";
    cout<<"Product is"<<prod<<"\n";
    cout<<"Quotient is"<<divi<<"\n";

    return 0;
}
// if we are defining a function within the class then there is no need to scope resolution operator.
// we will be using dot operator to call the function