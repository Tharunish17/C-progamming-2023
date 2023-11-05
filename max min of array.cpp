#include<stdio.h>
int main()
{
	int n,i,max,min,d=0;
	scanf("%d",&n);
	int a[n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		 max=a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		 min=a[i];
	}
	for(i=0;i<n;i++)
	d+=a[i];
	 printf("%d %d %dare maximum,average and minimum",max,d/n,min);
	 return 0;
}