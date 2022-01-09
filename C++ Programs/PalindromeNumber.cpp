// Program to check palindrome number.

#include <iostream>
using namespace std;

class PalindromeNumber
{
    public:
        int n, num, digit, rev = 0;
        void getData();
        void display();

};

void PalindromeNumber::getData()
{
    cout << "Enter a positive number: ";
    cin >> num;

}

void PalindromeNumber::display()
{
    n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } 
     while (num != 0);

     cout <<" The reverse of the number is: " << rev << endl;

     if (n == rev)
        {
         cout << " The number is a palindrome.";
        }
     else
        {
         cout << " The number is not a palindrome.";
        }
}

int main()
{
    system("cls");
    PalindromeNumber ob;
    ob.getData();
    ob.display();
    return 0;
}