#include<stdio.h>
int main()
{
	char a;
	printf("Enter a charecter");
	scanf("%c",&a);
	if((a>64 && a<91)||(a>96 && a<123))
	printf("alphabet");
  else 	if(a<58 && a>47)
	printf("digits");
	else 
	printf("special charecter");
	return 0;
}