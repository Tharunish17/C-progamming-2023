#include<stdio.h>
int main()
{
	float a;
	printf("Enter your power usage");
	scanf("%f",&a);
	if (a>=0 && a<100)
	 printf("Your bill is %f",(2*a));
	else if (a>=100 && a<200)
	  printf("Your bill is %f",5*a);
	else 
	   printf("Your bill is %f",(10*a)+(a/10));
    return 0;
}
