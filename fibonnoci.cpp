#include<stdio.h>
int main()
{
	int n,i,b,c;
	printf("enter the value for n");
	scanf("%d",&n);
	int a[n];
	b=0;c=1;
	for(i=0;i<n;i++)
	{
		if(i==0) 
		a[i]=b;
   else if(i==1) 
		a[i]=c;
	else
	  {
	  	a[i]=b+c;
	    b=c;
	    c=a[i];
	  }
	}
	printf("%d",a[n-1]);
	return 0;
}