#include <iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter one character: ";cin>>ch;
    int ascii = ch;
    if(ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117 ||
           ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85){
            cout<<ch<<" is a vowel."<<endl;

           }
           else{
            cout<<ch<<" is a consonant.\n";
           }
           
    return 0;
} // namespace std;
