#include<stdio.h>
int main()
{
	int i,n,t,r,r1;
	r1=0;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
    for(i=0;n>0;i++)
    {
    	r=n%10;
        if(n==t || n/10==0)
         r1+=r;
         n/=10;
	}
	printf("%d",r1);
	return 0;
}