#include<stdio.h>
int main()
{
	int n,i,j,k;
	k=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){

	for(j=0;j<n-i;j++,k++)
	{
	printf("%d ",k);
}
   printf("\n");
}
	return 0;
}
