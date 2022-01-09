// Program to find GCD and LCM

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the GCD and LCM of two numbers ===== \n";
    int n1, n2, i;
    int gcd = 1, lcm = 1; 

    system("cls");
    cout << " Enter the two numbers you want to find the GCD and LCM of :";
    cin >> n1 >> n2;

    for ( i = 1; i < 1000; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i;          
        }
    }

    lcm = (n1 * n2) / gcd;

    cout << " \nThe GCD of the two numbers : " << n1 << " and " << n2 << " is : " << gcd;
    cout << " \nThe LCM of the two numbers : " << n1 << " and " << n2 << " is : " << lcm;

    return 0;
}
