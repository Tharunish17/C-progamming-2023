#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	printf("Enter the %dx%d array values1",n,n);
	for(i=0;i<n;i++)
	 {
	 for(j=0;j<n;j++)
	  {
	  scanf("%d",&a[i][j]);
      }
 printf("\n");
      } 
	printf("Enter the %dx%d array values2",n,n);
    	for(i=0;i<n;i++)
	 {
	 for(j=0;j<n;j++)
	  {
	    scanf("%d",&b[i][j]);
      }
      printf("\n");
  } 
  printf("The addition of matrix is:");
	for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	printf("%d\t",b[i][j]+a[i][j]);	
	}
	printf("\n");
    }
     printf("The subraction of matrix is:");
    	for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	printf("%d\t",b[i][j]-a[i][j]);	
	}
	printf("\n");
    }
	return 0;
}