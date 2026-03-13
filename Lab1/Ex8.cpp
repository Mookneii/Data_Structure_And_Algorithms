#include <iostream>
#include <cmath>
using namespace std;
double ConvertToFahrenheit(double Celsius){
    double Fahrenheit;
    return  Fahrenheit = (Celsius * 9.0 / 5.0) + 32;
}
double ConvertToCelsius(double Fahrenheit){
    double Celsius;
     return Celsius = (Fahrenheit - 32) * 5.0 / 9.0;
}
void findRoot(double a,double b, double c){
    double  delta = b*b - 4*a*c;
    if(delta > 0){
        double x1 = (-b + sqrt(delta))/(2 * a);
         double x2 = (-b - sqrt(delta))/(2 * a);
        cout<<"The real root X1= "<<x1<<" X2= "<<x2<<endl;
    }else if(delta == 0){
        double x = -b/(2 * a);
        cout<<"The root is x = "<<x<<endl;
    }else{
        cout<<"No Roots!"<<endl;
    }
}
void bmiCalculate( double weight, double height){
    double bmi = weight / (height * height);
    if(bmi< 18.5){
        cout<<"Underweight\n";
    }else if(bmi< 25){
        cout<<"Normal weight\n";
    }else if(bmi<30){
        cout<<"Overweight\n";
    }else{
        cout<<"Obese";
    }
}
int sumExceptDiv3(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            continue;
        sum += i;
    }
    return sum;
}
int main(){
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Root of quadratic equation\n";
        cout << "4. Compute BMI\n";
        cout << "5. Sum from 1 to n except numbers divisible by 3\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double celsius;
                cout << "Enter Celsius: ";
                cin >> celsius;
                cout << "Fahrenheit = " << ConvertToFahrenheit(celsius) << endl;
                break;
            }

            case 2: {
                double fahrenheit;
                cout << "Enter Fahrenheit: ";
                cin >> fahrenheit;
                cout << "Celsius = " << ConvertToCelsius(fahrenheit) << endl;
                break;
            }

            case 3: {
                double a, b, c;
                cout << "Enter a, b, c: ";
                cin >> a >> b >> c;
                findRoot(a, b, c);
                break;
            }

            case 4: {
                double weight, height;
                cout << "Enter weight (kg): ";
                cin >> weight;
                cout << "Enter height (m): ";
                cin >> height;
                bmiCalculate(weight, height);
                break;
            }

            case 5: {
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "Sum = " << sumExceptDiv3(n) << endl;
                break;
            }

            case 0:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}