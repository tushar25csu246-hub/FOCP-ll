#include <iostream>
#include <cmath>
using namespace std;


bool isPerfect(int num) {
    if (num <= 0) return false;

    int sumDivisors = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumDivisors += i;
        }
    }
    return sumDivisors == num;
}


bool isArmstrong(int num) {
    if (num < 0) return false;
    
    int original = num;
    int digits = 0;
    int temp = num;
    
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
   
    int sumPowers = 0;
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sumPowers += pow(digit, digits);
        temp /= 10;
    }
    
    return sumPowers == original;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPerfect(number)) {
        cout << number << " is a Perfect number." << endl;
    } else {
        cout << number << " is not a Perfect number." << endl;
    }
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}