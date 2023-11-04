#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the value of n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value of array");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	 for(j=0
	 ;j<n;j++)
	 {
	 	if(a[i]==a[j] && i!=j)
	   {
        for(k=i;k<n;k++)
		a[k]=a[k+1];	
		n--; 
		 printf("%d",n);
			}
	 }
	 printf("\n");
	 printf("The array values of:");
	  for(i=0;i<n;i++)
      printf("%d\t",a[i]);
      return 0;
}