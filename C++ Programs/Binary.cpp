// Program to convert decimal number to binary

#include <iostream>
using namespace std;
int main()
{
 int num,arr[64];
 system("cls");
 cout<<"Enter a decimal number: ";
 cin>>num;
 int i=0,r;
 while(num!=0)
{
  r = num%2;
  arr[i++] = r;
  num /= 2;
}

for(int j=i-1;j>=0;j--){
 cout<<arr[j];
  }
  return 0;
}