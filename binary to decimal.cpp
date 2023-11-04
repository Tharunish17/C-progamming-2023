#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,rem,dec;
	dec=0;
	printf("ENTER THE BINARY");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
	rem=n%10;
	dec=dec+(rem*(pow(2,i)));
	n=n/10;	
	}
	printf("%d",dec);
	return 0;
}