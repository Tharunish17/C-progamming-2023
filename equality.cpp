#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three values");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && a==c && b==c)
	  printf("EQUAL");
	else 
	  printf("UNEQUAL");
    return 0;
}