#include<iostream>
#include<math.h>
using namespace std;
class greatest_num
{
int x,y,max_num;
public:
void input();
void display();
};
void greatest_num::input()
{
cout<<"Enter the value of x and y:";
cin>>x>>y;
}

void greatest_num::display()
{
max_num =max(x,y);
cout<<"the greatest number between x and y:"<<max_num;
}

int main()
{
greatest_num ob;
ob.input();
ob.display();
return(0);
};