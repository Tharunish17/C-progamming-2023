#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	printf("Enter the array values");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	 for(i=0;i<n;i++) 
	 { 
	 b[i]=a[i];
	 printf("%d\t",b[i]);
}
}
