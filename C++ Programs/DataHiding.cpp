// Program to illustrate data hiding.

#include<iostream>  
using namespace std;  
class Base{      
    int num;    
    public:     
    void getData();  
    void showData();         
};  
void Base :: getData()  
{  
    cout<< "Enter any Integer value" <<endl;   
    cin>>num;         
}  
void Base :: showData()  
{  
    cout<< "The value is " << num <<endl;  
}  
    
int main(){  
    system("cls");
    Base obj;       
    obj.getData();  
    obj.showData();   
    return 0;  
}  