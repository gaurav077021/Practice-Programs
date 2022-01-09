// Program to create and write a file

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  system("cls");
  ofstream file;
  file.open ("abc.txt");
  file << "Please write this text to a file.\n this text is written using C++\n";
  file.close();
  cout<<"File writing completed";
  return 0;
}