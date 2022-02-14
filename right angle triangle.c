#include <stdio.h>

void main()
{
   int i,j,rows;
   printf("Input the number of steps : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("01");
	printf("\n");
   }
}