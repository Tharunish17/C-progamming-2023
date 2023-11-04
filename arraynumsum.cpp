#include<stdio.h>
int main()
{
	int n,m,i,sum1=0,sum2=0;
	printf("Enter the value of n,m");
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	printf("Enter array values for n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("Enter array values for m");
	for(i=0;i<m;i++)
	  scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	 sum1=sum1*10+a[i];
	 for(i=0;i<m;i++)
	 sum2=sum2*10+b[i];
	 printf("%d",sum1+sum2);
	}