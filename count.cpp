#include<stdio.h>
int main()
{
	int n,i,j,x,c,count;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of x");
	scanf("%d",&x);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		count=0;
		c=(a[i]+x)/2;
		for(j=0;j<n;j++)
		if(c==a[j])
		 count++;
		 printf("%d",count);
	}
	return 0;
}