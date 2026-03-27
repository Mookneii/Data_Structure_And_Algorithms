#include<iostream>
using namespace std;
void display(int n){
    if (n ==0){return;}
    cout<<n<<" ";
    display(n-1);
}
int main(){ 
    int n;
    cout<<"Enter n: ";cin>>n;
    cout<<"Display numbers from n to 1"<<endl;
    display(n);
}