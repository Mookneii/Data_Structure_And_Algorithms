#include <iostream>
using namespace std;
int main()
{
    string name;
    char gender;
    double salary;
    cout<<"Tax system: \n";
    cout<<"Please Enter Your Name: ";cin>> name;
    cout<<"Please Enter Your gender(M / F): ";cin>>gender;
    cout<<"Please Enter Your salary: ";cin>>salary;
    if( gender ='M'){
        if(salary > 1000){
            cout<<"Your salary after taxed is: "<< salary + (salary* (9.5/100))<<"$"<<endl;
        }else if(salary >500 && salary <=1000){
            cout<<"Your salary after taxed is: "<< salary + (salary* (7/100))<<"$"<<endl;
        }else if(salary >=300 && salary <=500){
            cout<<"Your salary after taxed is: "<< salary + (salary* (5/100))<<"$"<<endl;
        }else{
            cout<<"Your salary after taxed is: "<< salary<<"$"<<"(no need to pay tax)"<<endl;
        }
    }else if(gender == 'F'){
        if(salary > 1000){
            cout<<"Your salary after taxed is: "<< salary + (salary* (8/100))<<"$"<<endl;
        }else if(salary >500 && salary <=1000){
            cout<<"Your salary after taxed is: "<< salary + (salary* (6.5/100))<<"$"<<endl;
        }else if(salary >=300 && salary <=500){
            cout<<"Your salary after taxed is: "<< salary + (salary* (3.5/100))<<"$"<<endl;
        }else{
            cout<<"Your salary after taxed is: "<< salary<<"$"<<"(no need to pay tax)"<<endl;
        }
    }

    return 0;
} 
