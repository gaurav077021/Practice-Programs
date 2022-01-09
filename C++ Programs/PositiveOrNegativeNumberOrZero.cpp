// Program to check positive or negative number or zero. 

#include <iostream>
using namespace std;

class PositiveOrNegativeNumber
{
    public:
         int num;
         void getInput();
         void display();
};

void PositiveOrNegativeNumber::getInput()
{  
    cout << "Enter a number to check whether it is positive or negative or zero: ";
    cin >> num;
}

void PositiveOrNegativeNumber::display()
{
    if(num == 0)
    {
        cout<<num<<" is Zero.";
    }
    else if(num >= 0)
    {
        cout<<num<<" is a Positive number.";
    }
    else
    { 
        cout <<num<<" is a negative number.";
    }
}

int main() {
    system("cls");
    PositiveOrNegativeNumber ob;
    ob.getInput();
    ob.display();
    return(0);
}