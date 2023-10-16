#include<stdio.h>
int main()
{
	int n,i,j,a,b,k;
	printf("Enter the value of the starting number");
	scanf("%d",&k);
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++,k++){

	for(j=0;j<=i;j++)
	{
	printf("%d ",k);
}
   printf("\n");
}
for(a=0;a<n;a++,k--){

	for(b=0;b<n-a;b++)
	{
	printf("%d ",k-1);
}
   printf("\n");
}
	return 0;
}
