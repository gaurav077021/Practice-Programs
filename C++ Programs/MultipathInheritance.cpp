// Construct a class to illustrate the use of multipath inheritance

 
#include <iostream>
using namespace std;
class ClassA {
public:
    int a;
};
 
class ClassB : public ClassA {
public:
    int b;
};
class ClassC : public ClassA {
public:
    int c;
};
 
class ClassD : public ClassB, public ClassC {
public:
    int d;
};
 
int main()
{
    system("cls");
    ClassD obj;
 
    obj.ClassB::a = 10; // Statement 3
    obj.ClassC::a = 100; // Statement 4
 
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
 
    cout << "\n A from ClassB  : " << obj.ClassB::a;
    cout << "\n A from ClassC  : " << obj.ClassC::a;
 
    cout << "\n B : " << obj.b;
    cout << "\n C : " << obj.c;
    cout << "\n D : " << obj.d;
    return 0;
}