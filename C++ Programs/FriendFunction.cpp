//Construct a class to illustrate the use of friend function.

#include <iostream> 
using namespace std; 
class Box 
{ 
    private: 
        int length; 
    public: 
        Box(): length(0) { } 
        friend int printLength(Box); 
};  
int printLength(Box b) 
{ 
    b.length += 10; 
     return b.length; 
} 
int main() 
{ 
    system("cls");
    Box ob; 
    cout<<"Length of box: "<< printLength(ob)<<endl; 
    return 0; 
} 