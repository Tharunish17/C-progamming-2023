#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	{
	printf(" ");
}
    for(k=0;k<=i;k++)
    { 
      if(i%2==0)
	    printf("*");
	 else 
	   printf("-");
}
   printf("\n");
}
    for(i=n;i<2*n;i++)
{
	for(j=0;j<=i-n;j++)
	{
	printf(" ");
}
    for(k=0;k<2*n-i-1;k++)
    {
	  if(i%2==0)
	    printf("*");
	 else 
	   printf("-");
}
   printf("\n");
}
	return 0;
}