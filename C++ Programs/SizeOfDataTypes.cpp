// Program to find size of int, float ,double and char datatype.

#include <iostream>
using namespace std;

class SizeOfDataTypes
{
    public:
    void display();
};

void SizeOfDataTypes::display()
{
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
}

int main() 
{  
   system("cls");  
   SizeOfDataTypes ob;
   ob.display();
   return 0;
}