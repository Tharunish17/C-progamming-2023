#include<stdio.h>
int main()
{
	int n,i,c,m,t;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value the place need to be inserted");                              
	scanf("%d",&m);
	int a[n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	 	scanf("%d",&a[i]);
	n++;
	printf("Enter the value need to be inserted");
	 scanf("%d",&c);
	a[n-1]=c;
	for(i=n-1;i>m-1;i--)
	{
	    t=a[i];
		a[i]=a[i-1];
		a[i-1]=t;   	
			  } 
	for(i=0;i<n;i++) 
	 printf("%d\t",a[i]);        
}