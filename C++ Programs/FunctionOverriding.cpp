// Construct a class to illustrate the use of function overriding

#include <iostream>
using namespace std;
class BaseClass {
public:
   void disp(){
      cout<<"Function of Parent Class";
   }
};
class DerivedClass: public BaseClass{
public:
   void disp() {
      cout<<"Function of Child Class";
   }
};
int main() {
   system("cls");
   DerivedClass obj = DerivedClass();
   obj.disp();
   return 0;
}