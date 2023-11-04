#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number for sum of natural numbers");
	scanf("%d",&n);
    int sum=0;
	for(i=1;i<=n;i++)
	   {
	   	sum=sum+i;
	   }
	   printf("%d",sum);
	return 0;
}