// Program to demonstrate passing arguments as call by value

#include<iostream>
using namespace std;

void swap(int a, int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}

int main() 
{  
 int a=100, b=200;  
 system("cls");
 swap(a, b);  // passing value to function
 cout<<"Value of a: "<<a<<endl;
 cout<<"Value of b: "<<b;
 return 0;
}  