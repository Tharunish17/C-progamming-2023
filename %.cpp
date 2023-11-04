#include<stdio.h>
int main()
{
	int n,i,j,n1,n2;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d values of array",n);
	n1=0;
	n2=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	   {
	  	if(a[i]%2==0)
	  	 n1++;
	  }
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]%2!=0)
	  	 n2++;
	  }
	  int b[n1];
	  int c[n2];
	   for(i=0,j=0;i<n;i++)
	  {
	  	if(a[i]%2==0)
	  	{
		  b[j]=a[i];
		  j++;
		  }
	  }
	for(i=0,j=0;i<n;i++)
	  {
	  	if(a[i]%2!=0)
	  	{
		  c[j]=a[i];
		  j++;
		  }
	  }
	  printf("Even numbers are:\t");
	   for(i=0;i<n1;i++)
	   printf("%d,",b[i]);
	printf("\n Odd numbers are:\t");
	for(i=0;i<n2;i++)
	   printf("%d,",c[i]);
   return 0;
}