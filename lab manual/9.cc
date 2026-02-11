#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter letter:";
    cin>>ch;
    int a=int(ch);

if (a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117)
{
    cout<<"Vowel letter";
}
else if (a>=48 && a<=57)
{
    cout<<"Number";
}
else if (a!=65 && a!=69 && a!=73 && a!=79 && a!=85 && a!=97 && a!=101 && a!=105 && a!=111 && a!=117)
{
    cout<<"Consonant letter";
}
return 0;
}