/*  program to find the eligibility to donate blood using Nested If Statement. 
    (condition: age >=18 and weight>=50) */

#include<iostream>
using namespace std;
class DonateBlood{
    int age,weight;
    public:
    void get()
    {
        cout<<"Enter the age and weight"<<endl;
        cin>>age>>weight;
    }
    void check()
    {
        if((age>=18)&&(weight>=50))
        {
           cout<<"Elegible to donate";
        }
        else{
           cout<<"Not elegeble";
        }
    }

};
int main()
{
    system("cls");
    DonateBlood ob;
    ob.get();
    ob.check();
    return 0;
}
