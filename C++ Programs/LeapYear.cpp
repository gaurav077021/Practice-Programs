// Program to check leap year. 

#include <iostream>
using namespace std;

class LeapYear
{
    public:
         int year;
         void getInput();
         void display(); 
};

void LeapYear::getInput()
{  
    cout << "Enter a year: ";
    cin >> year;
}

void LeapYear::display()
{
       if (year % 4 == 0)
        {
        if (year % 100 == 0)
            {
            if (year % 400 == 0)
                {
                cout << year << " is a leap year.";
                }
            else
                {
                cout << year << " is not a leap year.";
                }
        }
        else
            {
            cout << year << " is a leap year.";
            }
    }
    else
        {
        cout << year << " is not a leap year.";
        }
}

int main() {
    system("cls");
    LeapYear ob;
    ob.getInput();
    ob.display();
    return(0);
}