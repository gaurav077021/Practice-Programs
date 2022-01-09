// Program to check armstrong number.

#include <iostream>
using namespace std;

class Armstrong
{
    public:
        int num, originalNum, remainder, result = 0;
        void getData();
        void display();
};

void Armstrong::getData()
{
    cout << "Enter a three-digit integer: ";
    cin >> num;
}

void Armstrong::display()
{
     originalNum = num;

    while (originalNum != 0) 
    {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        {
        cout << num << " is an Armstrong number.";
        }
    else
        {
        cout << num << " is not an Armstrong number.";
        }
}

int main() {
    system("cls");
    Armstrong ob;
    ob.getData();
    ob.display();
    return 0;
}
