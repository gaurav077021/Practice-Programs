// Program to print fibonacci series without using recursion and using recursion

#include<iostream>
using namespace std;

int fibo(int n)
{
if(n<=1) // base case
  return n;
return fibo(n-1)+fibo(n-2);
}

int main()
{
int n,i=0;
system("cls");
cout << "Enter the terms to print series: ";
cin>>n;
while(i<n)
{
cout<<" "<<fibo(i);
i++;
}
return 0;
}