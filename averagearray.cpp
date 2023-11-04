#include<stdio.h>
int main()
	{
	int n,i,sum1,sum2,c=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	int b[n-1];
	printf("Enter array values");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	c=a[0];
	for(i=0;i<n;i++)
   {
	 b[i]=(a[i]+c)/2;
	}
    printf("The average at every point is:\t");
    for(i=0;i<n;i++)
      printf("%d.%d\n",i+1,b[i]);
	 return 0;
}