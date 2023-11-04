#include<stdio.h>
int main()
{
	int n,i,j,k,e,d=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter array values");
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
	 printf("\n");
     }
    for(i=0;i<n;i++)
    {
	  for(j=0;j<n;j++)
	  {
	 printf("%d\t",a[i][j]);
   }
    printf("\n");
    }
    return 0;
}