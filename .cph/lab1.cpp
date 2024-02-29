#include <iostream>
using namespace std;

int calculateGCD(int num1, int num2) {
    // Calculate the Greatest Common Divisor of two numbers using the Euclidean algorithm
    if (num1 % num2 == 0) {
        return num2;
    } else {
        calculateGCD(num2, num1 % num2);
    }
}

int main() {
    int num1, num2, gcd, i, j;
    cout << "Enter a large number: ";
    cin >> num1;
    cout << "Enter a small number: ";
    cin >> num2;
    gcd = calculateGCD(num1, num2);
    cout << "GCD is: " << gcd << endl;
    for (i = 0; i <= 2 * num1; i++) {
        for (j = 0; j <= 2 * num1; j++) {
            if (gcd == i * num1 + j * num2) {
                cout << "S = " << i << " and T = " << j << endl;
                return 0;
            }
            if (gcd == i * num1 - j * num2) {
                cout << "S = " << i << " and T = -" << j << endl;
                return 0;
            }
            if (gcd == -j * num1 + i * num2) {
                cout << "S = -" << j << " and T = " << i << endl;
                return 0;
            }
            if (gcd == -j * num1 - i * num2) {
                cout << "S = -" << j << " and T = -" << i << endl;
                return 0;
            }
        }
    }
}