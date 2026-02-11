#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not a Leap Year";
    }
return 0;
}
// when we are taking the string input immediately after any other data type input then we have to use cin.ignore() function to ignore the newline character left in the input buffer.