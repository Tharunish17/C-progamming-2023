#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number intreval");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {
	   	if(i%2==1)
	   	  printf("%d ",i);
	   	else;
	   }
	return 0;
}