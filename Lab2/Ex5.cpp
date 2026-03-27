#include <iostream>
using namespace std;
int findSum(int a[], int n){
    if(n ==0){
        return a[0];
    }
    return a[n-1]+ findSum(a, n-1);
}
int main(){
    
    int a[5]={12,5,7,21,6};
    cout<<"Sum = "<<findSum(a, 5);
    return 0;
}