// Program to demonstrate function overloading using generic function

#include <iostream>
using namespace std;
int sum (int a, int b)
{
  return a+b;
}
double sum (double a, double b)
{
  return a+b;
}
int main ()
{
  system("cls");
  cout << sum (10,20) << '\n';
  cout << sum (1.0,1.5) << '\n';
  return 0;
}