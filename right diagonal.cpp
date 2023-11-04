#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the %dx%d array values",n,n);
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	 	 c+=a[i][n-i-1];
		  printf("The right trace of matrix is %d",c);
	return 0;
}