#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of sum");
	scanf("%d",&l);
	int a[n];
	 printf("Enter the array values");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	  }	  
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	for(k=j+1;k<n;k++)
	{
	if(a[i]+a[j]+a[k]==l)
	  printf("(%d,%d,%d)",a[i],a[j],a[k]);	
	}
}
}
	return 0;
}