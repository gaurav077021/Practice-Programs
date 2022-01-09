#include<iostream>
using namespace std;
class Demo1
{
    public:
        int num,temp=0;
        void getData();
        void display();
};

void Demo1::getData()
{
    cout<<"Enter a number to check if it is prime or not: ";
    cin>>num;
}

void Demo1::display()//a number that is divisible only by itself and 1 
{
   if(num == 0 || num == 1)
   {
      cout<<"It is not a prime number";
   }
   else
   {
       for(int i=2; i<= num;i++)
       {
           if(num%i == 0)
           {
              temp = temp+1; 
           }
       }

       if(temp == 1)
    {
      cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }

   }
}


int main()
{
    system("cls");
    Demo1 ob;
    ob.getData();
    ob.display();
    return (0);
}
