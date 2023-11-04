#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of the series number");
	scanf("%d",&n);
	int a[n];
    a[0]=0,a[1]=1;
	for(i=2;i<n;i++)
	 {
	 	a[i]=a[i-1]+a[i-2];
	  }
	  printf("%d",a[n]);
}