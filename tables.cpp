#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter the number intreval");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	   {
	   m=i*n;
	   printf("%d*%d=%d\n",i,n,m);
	   }
	return 0;
}