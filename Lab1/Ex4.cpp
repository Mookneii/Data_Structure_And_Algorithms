#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  int uChoice,comChoice;
    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> uChoice;
    srand(time(0));
    comChoice = rand() % 3+1;
     if(comChoice == 1)
        cout << "Rock\n";
    else if(comChoice == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";
        if(uChoice == comChoice){
        cout << "It's a Draw!\n";
    }
    else if((uChoice == 1 && comChoice == 3) ||
            (uChoice == 2 && comChoice == 1) ||
            (uChoice == 3 && comChoice == 2)){
        cout << "You Win!\n";
    }
    else{
        cout << "Computer Wins!\n";
    }

    return 0;
} // namespace std;
