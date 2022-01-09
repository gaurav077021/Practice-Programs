// Construct a class to illustrate the use of multiple inheritance

#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal() {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal() {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {};

int main() {
    system("cls");
    Bat b1;
    return 0;
}