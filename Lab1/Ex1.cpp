#include <iostream>
using namespace std;
string name, major;
int age;
char gender;
int main(){
    cout<<"Please Enter:\n";
    cout<<"Name: ";cin>>name;
    cout<<"Gender(only: 'M' or 'F'): ";cin>> gender;
    cout<<"Major: "; cin>> major;
    cout<<"Age: "; cin>> age;
    if( age>=18 && gender == 'M'){
        cout<<"Hi, Mr."<<name<<"! your age is "<<age<<" year olds and you learn "<<major<<endl;
        cout<<"You can vote."; 
    }else if(age >=18 && gender == 'F'){
        cout<<"Hi, Mrs."<<name<<"! your age is "<<age<<" year olds and you learn "<<major<<endl; 
         cout<<"You can not vote.";
    }
    else{
        cout<<"Invalid Input!";
    }

    return 0;
}