#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("Enter the %dx%d array values",n,n);
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	 b[j][i]=a[i][j];
	 printf("The transpose matrix is:");
	for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	printf("%d\t",b[i][j]);	
	}
	printf("\n");
}
	return 0;
}