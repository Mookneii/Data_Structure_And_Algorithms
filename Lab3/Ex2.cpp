#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter n :";cin>>num;
    int *n = &num;
    cout<<"Modify by n + 7: "<<*n+7<<endl;   
    return 0;
}