#include <iostream>
#include<cmath>
using namespace std;
void solveEquation(int a, int b, int c, float *x1, float *x2, float *delta){
    *delta = b*b -4*a*c;
    if( *delta > 0){
        *x1 = (-b -sqrt(*delta))/2*a;
        *x1 = (-b +sqrt(*delta))/2*a;
    }
    else if(*delta ==0){
        *x1 = *x2 = -b / 2*a;
    }
    else{
        cout<<"No root";
    }
}
int main(){
    int a= 1;
    int b = 8;
    int c = 16;
    float x1, x2, delta;
    solveEquation(a,b,c,&x1,&x2,&delta);
    cout <<"delta : "<<delta<<endl;  
    if(delta >0){
        cout<<"x1 = "<<x1<<",x2 = "<<x2<<endl;
    }else if(delta == 0){
        cout<<"x1 =x2= "<<x1<<endl;
    }
    else{
        cout<<"No root"<<endl;
    }
}