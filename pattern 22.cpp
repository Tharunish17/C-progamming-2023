#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){

	for(j=0;j<=i;j++)
	{
     if(i==j)
      printf("%d",j+1);
    else
       printf("%d*",j+1);
}
   printf("\n");
}
for(i=0;i<n;i++){

	for(j=0;j<n-i;j++)
	{
	 if(i==n-j-1)
      printf("%d",j+1);
    else
       printf("%d*",j+1);
}
   printf("\n");
}
	return 0;
}
