#include<stdio.h>
int main()
{
	int n,i,j,k,e,d=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	int c[n][n];
	printf("Enter array1 values");
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
	 printf("\n");
	}
	printf("Enter array2 values");
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&b[i][j]);
	 }
	  printf("\n");
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	 for(k=0,d=0;k<n;k++)	
	{
	 e=a[i][k]*b[j][k];
	 d+=e;
	}
	c[i][j]=d;	
     }
    for(i=0;i<n;i++)
    {
	  for(j=0;j<n;j++)
	  {
	 printf("%d\t",c[i][j]);
   }
    printf("\n");
    }
    return 0;
}