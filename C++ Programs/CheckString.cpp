// Construct a class to check two strings s1!=52

#include <iostream>
using namespace std; 
class comparison{
     string str1, str2;
     public:
     void get()
     {
        cout << " Enter the string 1: "; 
    cin >> str1; 
    
    cout << " Enter the string 2: ";
    cin >> str2; 
     }
      void check()
      {
       int i = str1.compare(str2); 
       if(i!=0)
        {
         cout<<"Strings are not equal";
        }
        else 
           { 
            cout << " Both strings are equal.";
           } 
        }
} ;
int main () 
{ 
    system("cls");
    comparison c;
    c.get();
    c.check();
    return 0;
}