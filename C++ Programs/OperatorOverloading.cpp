//Construct a class to illustrate the use of operator overloading.

#include <iostream>
using namespace std;

class Count {
    int value;
    public:
void get()
{
    cout<<"enter the value:"<<endl;
    cin>>value;
}
    void operator ++ () {
        ++value;
    }
    void display() {
        cout << "Increamented Count: " << value << endl;
    }
};

int main() {
    system("cls");
    Count ob;
    ob.get();
    ob.display();
    return 0;
}