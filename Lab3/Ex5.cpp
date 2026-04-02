#include <iostream>
using namespace std;

void findMaxMin(int* arr, int* max, int* min) {
    *max = *arr;  
    *min = *arr;

    for (int i = 1; i < 7; i++) {
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
}
int main() {
    int arr[7];

    cout << "Enter 7 integer numbers:\n";

    
    for (int i = 0; i < 7; i++) {
        cin >> *(arr + i);
    }

    int max, min;

    
    findMaxMin(arr, &max, &min);

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

    return 0;
}


