// Program to find the length of the string

#include<iostream>
using namespace std;
int main() {
   char str[] = "Apple";
   int count = 0;
   system("cls");
   while (str[count] != '\0')
   count++;
   cout<<"The string is "<<str<<endl;
   cout <<"The length of the string is "<<count<<endl;
   return 0;
}