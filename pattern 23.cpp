#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
  {
  	for(j=0;j<=n;j++)
	{
		if(i%2==1)
		  {
		  	if(j==n)
		  	 printf("%d",i+1);
		  	 else
		  	printf("%d",i);
		  }
		else 
		 {
		  	if(j==1)
		  	 printf("%d",i+1);
		  	 else
		  	printf("%d",i);
		  }
	} 
	   	printf("\n");
}
	return 0;
}