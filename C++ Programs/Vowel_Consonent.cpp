// Program to check vowel or consonant using Switch statement

#include <iostream>
using namespace std;
class VowelConsonant{
    char ch;
    public:
    void get()
    {
        cout<<"Enter the character"<<endl;
        cin>>ch;
    }
    void check()
    {
    switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout<<ch<<" is a vowel";
    break;  
    default:
    cout<<ch<<" is a consonant";
    break;
    }
    }
};
int main()
{
    system("cls");
    VowelConsonant ob;
    ob.get();
    ob.check();
    return 0;
}
