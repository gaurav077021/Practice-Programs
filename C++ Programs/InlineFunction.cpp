// Program to demonstrate the use of inline function

#include <iostream>
using namespace std;

class convert{
    float feet;;
public:
void get()
{
    cout<<"Enter height in feet"<<endl;
    cin>>feet;
}
inline void convert_feet()
{
    cout<<"Height in Inches is: "<<feet*12;
}
};

int main()
{
    system("cls");
    convert c;
    c.get();
    c.convert_feet();
    return 0;
}
