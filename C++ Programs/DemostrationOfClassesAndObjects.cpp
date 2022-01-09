// Program to demonstrate how to use class and objects

#include <iostream>  
using namespace std;  
class Student
    {  
    public:  
      int id;           //data member (also instance variable)      
      string name;      //data member(also instance variable)      
    };  
int main() 
    {
    system("cls");  
    Student ob; //creating an object of Student   
    ob.id = 201013002;    
    ob.name = "Gaurav Kumar";   
    cout<<ob.id<<endl;  
    cout<<ob.name<<endl;
    return(0);
    }  