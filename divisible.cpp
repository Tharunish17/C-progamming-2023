#include<stdio.h>
int main()
{
	int n,i,k,j,c;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of k");
	scanf("%d",&k);
	int a[n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		{
		if((a[i]+a[j])%k==0)
		c=1;
		else c=0;
	}
	if(c==1)
	printf("True");
	else 
	 printf("False");
	return 0;
}