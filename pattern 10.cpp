#include<stdio.h>
int main()
{
	int n,i,j,a,b;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){

	for(j=0;j<=i;j++)
	{
	printf("* ");
}
   printf("\n");
}
for(a=0;a<n;a++){

	for(b=0;b<n-a;b++)
	{
	printf("* ");
}
   printf("\n");
}
	return 0;
}
