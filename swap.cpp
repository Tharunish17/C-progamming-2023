#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two values");
	scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The numbers is %d",a);
    printf("The number is %d",b);
	return 0;
}
