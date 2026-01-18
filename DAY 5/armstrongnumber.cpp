// An Armstrong number (also called a narcissistic number) is a number 
//that is equal to the sum of its own digits each raised to the power of the number of digits. 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digit, sum = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits:
    
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate Armstrong sum:

    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
