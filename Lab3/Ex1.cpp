#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    int *p1 = &n1;
    int *p2 = &n2;
    int *p3 = &n3;
    cout<<"n1 address at "<<p1<<", value "<<*p1<<endl;
    cout<<"n2 address at "<<p2<<", value "<<*p2<<endl;
    cout<<"n3 address at "<<p3<<", value "<<*p3<<endl;
       *p3 = *p1 + *p2;
    cout<<"After update: \n";
    cout<<"n3 address at "<<p3<<", value "<<*p3<<endl;
    return 0;
}
