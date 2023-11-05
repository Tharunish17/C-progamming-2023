#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter values if n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	 b[i]=a[i];
	for(i=0;i<n;i++)
	 a[i]=b[n-i-1];
	for(i=0;i<n;i++)
	 printf("%d\t",a[i]);
	 return 0;
}
