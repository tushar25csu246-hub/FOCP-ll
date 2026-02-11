#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Score of First player: ";
    cin>>a;
    cout<<"Enter Score of Second player: ";
    cin>>b;
    cout<<"Enter Score of Third player: ";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"First player has highest score: "<<a;
    }
    else if (b>a && b>c)
    {
        cout<<"Second player has highest score: "<<b;
    }
    else
    {
        cout<<"Third player has highest score: "<<c;
    }
    
}