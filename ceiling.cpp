#include<stdio.h>
int main()
{
	int n,i,x;
	printf("Enter the value of n");
	scanf("%d",&n);
    printf("Enter the value of x");
	scanf("%d",&x);
	int a[n];
	printf("Enter the %d array values",n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	 	{
		 if(a[i]>=x)
	 	{
	 		printf("The ceiling of the array is %d",a[i]);
	 		break;
		 }
	}
	return 0;
}