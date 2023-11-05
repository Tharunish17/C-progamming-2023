#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter values if n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
	       {
	       	t=a[i];
	       	a[i]=a[i+1];
	       	a[i+1]=t;
		   }
	}
	for(i=0;i<n;i++)
	 printf("%d\t",a[i]);
	 return 0;
}
