#include<iostream>
using namespace std;
int fib (int n){
    if(n ==0){
        return 1;
    }
    if(n==1){
        return 4;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
   cout<<"enter: ";cin >>n;
    return 0;
    

}