#include<stdio.h>
int main()
{
	float a;
	printf("Enter distance in km");
	scanf("%f",&a);
	printf("%f m\n",a*1000);
	printf("%f cm",a*100000);
	return 0;
}