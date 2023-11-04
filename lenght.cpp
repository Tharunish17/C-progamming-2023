#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,m=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;n>0;i++)
	   {
	   n/=10;
	   m++;
	   }
	int a[m]; 
		for(i=m;n>0;m--)
	{
	 a[m-i]=a[m-i+1]/(pow(10,i));
	 printf("%d",a[m-i]);	
	}
	return 0;
}