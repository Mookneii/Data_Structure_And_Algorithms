#include <iostream>
using namespace std;
int main()
{
    int min;
    cout<<"Please enter n minute: ";cin>>min;
    int hours = min/60;
    int remaindermin = min % 60;
    int sec = 0;
    cout<<"Format time(h:m:s): "<<hours<<" : "<< remaindermin<<" : "<< sec;
    return 0;
} // namespace std;
