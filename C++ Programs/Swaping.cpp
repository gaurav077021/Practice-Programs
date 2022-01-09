// Program to swap two numbers without using third variable.

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    system("cls");

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}