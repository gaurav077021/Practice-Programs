// Program to print factorial of a number.

#include <iostream>
using namespace std;

class Factorial
{
    public:
        int n;
        long double factorial = 1.0;
        void getData();
        void display();
};

void Factorial::getData()
{
    cout << "Enter a positive integer: ";
    cin >> n;
} 

void Factorial::display()
{   
    if (n < 0)
        {
        cout << "Error! Factorial of a negative number doesn't exist.";
        }
    else
        {
        for(int i = 1; i <= n; ++i) 
            {
            factorial *= i;
            }
        cout << "Factorial of " << n << " = " << factorial;    
        }
}
int main() {
    system("cls");
    Factorial ob;
    ob.getData();
    ob.display();
    return 0;
}