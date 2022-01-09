// Program to check even or odd number.

#include<iostream>
using namespace std;
class EvenOrOddNumber
{
    int num;
    public:
        void getData();
        void display();
};

void EvenOrOddNumber::getData()
{
    cout<<"Please enter a value to check whether it is Even or Odd: ";
    cin>>num;
}

void EvenOrOddNumber::display()
{
    if(num%2==0)
    {
        cout<<num<<" is a even number";
    }
    else
    {
        cout<<num<<" is a odd number";
    }
}

int main()
{
    system("cls");
    EvenOrOddNumber ob;
    ob.getData();
    ob.display();
    return(0);
};

