#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	for(j=0;j<i;j++)
	{
	printf(" ");
}
    for(k=0;k<2*(n-i)-1;k++)
    {
	 printf("*");
}
   printf("\n");
}
	return 0;
}
