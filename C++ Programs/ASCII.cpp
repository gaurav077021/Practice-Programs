// Program to Print ASCII Value

#include<iostream>
using namespace std;
int main ()
{
    char c;
    system("cls");
    cout << "Enter a character : ";
    cin >> c;
    cout << "ASCII value of " << c <<" is :  " << (int)c;
    return 0;
}