// Program to print sum of digits.

#include<iostream>  
using namespace std; 

class SumOfDigits
{
    public:
        int n,sum=0,m;   
        void getData();
        void display();
};

void SumOfDigits::getData()
{
    cout<<"Enter a number: ";    
    cin>>n;     
}

void SumOfDigits::display()
{
    while(n>0)    
        {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
        }    
    cout<<"Sum is= "<<sum<<endl; 
}
int main()  
{  
    system("cls");
    SumOfDigits ob;
    ob.getData();
    ob.display();
    return 0;  
}  