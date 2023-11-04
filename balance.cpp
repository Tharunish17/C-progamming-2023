#include<stdio.h>
int main()
{
	int n,i,sum1,sum2;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
	  sum1+=a[i];
	}
	for(i=n/2;i<n;i++)
	{
	  sum2+=a[i];
	}
	if(sum1>sum2)
	printf("The value %d must be added to left half",sum1-sum2);
  else if(sum1<sum2)
	printf("The value %d must be added to right half",sum2-sum1);
	else
	 printf("Its balanced");
	 return 0;
}