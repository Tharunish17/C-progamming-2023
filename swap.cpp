#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter two numbers for swap");
	scanf("%f %f",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%f %f",a,b);
	return 0;
}