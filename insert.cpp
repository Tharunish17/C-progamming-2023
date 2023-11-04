#include<stdio.h>
int main()
{
	int n,j,m,t;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value the need to be inserted");                              
	scanf("%d",&m);
	int a[n];
	printf("Enter array values");
	for(j=0;j<n;j++)
	 	scanf("%d",&a[j]);
	n++;
	a[n-1]=m;
	for(j=n-1;j>0;j--)
	{
		if(a[j]<a[j-1])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
		}
	}
    for(j=0;j<n;j++)
	 printf("%d\t",a[j]);
	return 0;
}