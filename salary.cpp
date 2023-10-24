#include<stdio.h>
int main()
{
  int a,b,tier;
  printf("Enter your basic salary");
  scanf("%d",&a);
   printf("Enter your tier");
   scanf("%d",&tier);
   if (tier==1)
   {
   	b=(a*(17+25)/100)+a;
   	printf("Your salary is %d",b);
   }
   else if (tier==2)
    {
     b=(a*(17+18)/100)+a;
	 printf("Your salary is %d",b);
	}
	else if (tier==3)
	{
	 b=(a*(17+12)/100)+a;
	 printf("Your salary is %d",b);
	}
	else 
	printf("INVALID");
    return 0;
}
