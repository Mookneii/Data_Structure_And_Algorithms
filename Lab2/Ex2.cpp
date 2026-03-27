#include <iostream>
using namespace std;

// a. Power function: m^n
int power(int m, int n) {
    if (n == 0)
        return 1;
    return m * power(m, n - 1);
}

// b. Sum of squares: 1^2 + 2^2 + ... + n^2
int sumSquare(int n) {
    if (n == 1)
        return 1;
    return n * n + sumSquare(n - 1);
}

// c. Sum digits of a number
int sumDigit(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumDigit(n / 10);
}

int main() {
    cout << "power(2,3) = " << power(2,3) << endl;
    cout << "sumSquare(4) = " << sumSquare(4) << endl;
    cout << "sumDigit(123) = " << sumDigit(123) << endl;

    return 0;
}