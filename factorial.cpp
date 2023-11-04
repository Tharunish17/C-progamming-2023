#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number for factorial\n");
	scanf("%d",&n);
    int fact=1;
	for(i=1;i<=n;i++)
	   {
	   	fact=fact*i;
	   }
	   printf("%d",fact);
	return 0;
}