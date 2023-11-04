#include<stdio.h>
int main()
{
	int n,i,k,j,c;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of k");
	scanf("%d",&k);
	int a[n];
	printf("Enter the values of array");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	  {
	    for(j=0;i<n;i++)
	   {
	   	if (a[i]+a[j]==k && i!=j)
		   {printf("(%d,%d)\n",a[i],a[j]);
	   	   c=1;}
	   	else;
	   }
}
	   if(c==1)
	      printf("true");
	   else 
	    printf("False");
	    return 0;
}