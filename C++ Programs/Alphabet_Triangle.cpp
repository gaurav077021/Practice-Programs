/* Program to print alphabet triangle.
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/

#include <iostream>  
using namespace std;  
int main()  
{  
 char ch='A';    
    int i, j, k, m;
    system("cls");    
    for(i=1;i<=5;i++)    
    {    
        if(i==1)
        {
            continue;
        }
        for(k=1;k<=i;k++)
        {    
           
            cout<<ch++;  
        }  
            ch--;   
        for(m=1;m<i;m++) 
        {   
             
            cout<<--ch;  
        }  
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  