#include <iostream>
using namespace std;
int main()
{
   int n, sums=0;

   cout<<"summation of numbers from 1 to n.Please enter n:\n";
   cin>>n;
   if(n > 50){
   for(int i=1; i<=n;i++){
    if(i==10 or i==30){
        continue;
    }
    sums= sums+i;
   }
   cout<<"Summation from 1 to "<<n<<" is "<< sums;
   }
   else{
    cout<<"n must be greater than 50!";
   }
   
    return 0;
} 
