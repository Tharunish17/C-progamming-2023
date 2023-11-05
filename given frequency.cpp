#include<stdio.h>
int main()
{
	int n,i,k,j,count=0;
	printf("Enter values of n");
	scanf("%d",&n);
    printf("Enter value to obtain frequency");
	scanf("%d",&k);
	printf("Enter array values");
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		count++;
	}
	printf("%d is count of %d",count,k);
	 return 0;
}
