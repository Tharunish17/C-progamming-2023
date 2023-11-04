#include<stdio.h>
int main()
{
	char a;
	printf("Enter a charecter");
	scanf("%c",&a);
	if(a>64 && a<91)
	printf("uppercase");
  else 	if(a>96 && a<123)
	printf("lowercase");
	return 0;
}