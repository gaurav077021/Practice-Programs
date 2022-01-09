// Program to calculate the factorial of any number using recursion.

#include<stdio.h>
int find_factorial(int);
int main()
{
   int num, fact;
   system("cls");
   //Ask user for the input and store it in num
   printf("\nEnter any integer number:");
   scanf("%d",&num);
 
   //Calling our user defined function
   fact =find_factorial(num);
 
   //Displaying factorial of input number
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int find_factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
      return(1);
 
   //Function calling itself: recursion
   return(n*find_factorial(n-1));
}