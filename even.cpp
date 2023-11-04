#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number intreval\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {
	   	if(i%2==0)
	   	  printf("%d ",i);
	   	else;
	   }
	return 0;
}