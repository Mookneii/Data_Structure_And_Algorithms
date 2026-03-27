#include <iostream>
using namespace std;
int sumOdd(int n){
    if(n<=0)
    return 0;
    if (n%2 != 0) return n + sumOdd(n-1);
    return sumOdd(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Sum of odd numbers = "<<sumOdd(n);
        return 0;
}