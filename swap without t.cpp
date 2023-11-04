#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter two numbers for swap");
	scanf("%f %f",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("%f %f",a,b);
	return 0;
}