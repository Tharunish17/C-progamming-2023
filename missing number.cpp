#include<stdio.h>
int main()
{
	int n,i,sum1,sum2;
	printf("Enter values of n");
	scanf("%d",&n);
	printf("Enter array values");
	int a[n-1];
	for(i=0;i<n-1;i++)
	 scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
      sum1+=i;
    for(i=0;i<n-1;i++)
      sum2+=a[i];
	printf("%d is the missing element",sum1-sum2);
	 return 0;
}
