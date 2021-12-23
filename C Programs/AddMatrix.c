// Program to implement addition of matrix.

#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("Enter values for matrix A:\n");
	for(i=0;i<2;i++)
    {
		for(j=0;j<3;j++)
        {
			scanf("%d",&a[i][j]);
        }
    }
	printf("Enter values for matrix B:\n");
	for(i=0;i<2;i++)
    {
		for(j=0;j<3;j++)
        {
			scanf("%d",&b[i][j]);
        }
    }
	for(i=0;i<2;i++)
    {
		for(j=0;j<3;j++)
        {
			c[i][j]=a[i][j]+b[i][j];
        }
    }
	printf("\nThe sum of matrix A and B:\n");
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++)
            {
            	printf("%5d",c[i][j]);
            }
		printf("\n");
	    }
}