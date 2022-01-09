// Program to check prime number.

#include<iostream>
using namespace std;

class PrimeNumber
{
    public:
        int i, num;
        bool isPrime = true;
        void getData();
        void display();
};

void PrimeNumber::getData()
{
    cout << "Enter a positive integer: ";
    cin >> num;
}

void PrimeNumber::display()
{
 // 0 and 1 are not prime numbers
    if (num == 0 || num == 1)
        {
        isPrime = false;
        }
    else 
        {
        for (i = 2; i <= num / 2; ++i) 
            {
            if (num % i == 0)
                {
                isPrime = false;
                break;
                }
            }
        }
    if (isPrime)
        {
        cout<<num<< " is a prime number";
        }
    else
        {
        cout<<num<< " is not a prime number";
        }

}

int main() {
    system("cls");
    PrimeNumber ob;
    ob.getData();
    ob.display(); 
    return 0;
}