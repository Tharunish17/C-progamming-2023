#include<stdio.h>
int main()
{
	int n,i,j,count,k;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d values of array",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	for(j=0,count=1;j<n;j++)
	 {
	   if(a[i]==a[j])
	    {
	     count++;
	     printf("%d\n",count);
		for(k=j;k<n-1;k++)
		{
		  a[k]=a[k+1];
		}
		n--;
	}
}
	  printf("%d is the frequency of %d\n",count,a[i]);
    }
    return 0;
}