#include <iostream>
using namespace std;

int main() {
    float arr[7];
    float* ptr = arr;   
    cout << "Enter 7 float numbers:\n";
    for (int i = 0; i < 7; i++) {
        cin >> *(ptr + i);
    }
    float* displayPtr = arr;

    cout << "\nNumbers in array:\n";
    for (int i = 0; i < 7; i++) {
        cout << *(displayPtr + i) << " ";
    }

   
    float sum = 0;
    float product = 1;

    float* calcPtr = arr;

    for (int i = 0; i < 7; i++) {
        sum += *(calcPtr + i);
        product *= *(calcPtr + i);
    }

    cout << "\n\nSum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}