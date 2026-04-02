#include <iostream>
using namespace std;
void exchange(float *a, float *b){
    float temp = *a; 
    *a = *b;          
    *b = temp;       
}
int main(){
    float a=5;
    float b=6;
   
    cout<<"Before modifier a = "<<a<<", b = "<<b<<endl;
    exchange(&a, &b);
    cout<<"Before modifier a = "<<a<<", b = "<<b<<endl;
    return  0;
}