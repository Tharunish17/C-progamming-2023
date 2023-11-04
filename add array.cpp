#include<stdio.h>
int main()
{
	int n,i,c,t,j;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d array values",n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	n++;
	printf("Enter value need to be inserted");
	scanf("%d",&c);
	a[n-1]=c;
	for(j=0;j<n;j++)
	for(i=0;i<n-1;i++)
	 if(a[i]>a[i+1])
	 {
	 	t=a[i];
	 	a[i]=a[i+1];
	 	a[i+1]=t;
	 }
	 for(i=0;i<n;i++)
	   printf("%d.%d\n",i+1,a[i]);
}