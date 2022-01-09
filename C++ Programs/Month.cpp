// Program to print month name for the given number using Switch statement

#include<iostream>
using namespace std;
class Month{
int month;
public:
int get()
{
     cout<<"\nEnter the Month's number :";
     cin>>month;
     return month;
}
void find(int mon)
{
    switch (mon)
{
case 1:
    cout<<"January";
    break;
case 2:
    cout<<"Febrauary";
    break;
case 3:
    cout<<"March";
    break;
case 4:
    cout<<"April";
    break;
case 5:
    cout<<"May";
    break;
case 6:
    cout<<"June";
    break;
case 7:
    cout<<"July";
    break;
case 8:
    cout<<"August";
    break;
case 9:
    cout<<"September";
    break;
case 10:
    cout<<"October";
    break;
case 11:
    cout<<"November";
    break;
case 12:
 cout<<"December";
 break;
 default:
 cout<<"invalid month";
 break;
}
}
};
int main()
{
    system("cls");
    Month ob;
    int x;
    x=ob.get();
    ob.find(x);
    return 0;
}