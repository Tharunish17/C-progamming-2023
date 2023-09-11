#include<stdio.h>
#include<math.h>
int main()
{
  float principal,intrest,year,simple,amount,compound;
  printf("Enter the principal");
  scanf("%f",&principal);
  printf("Enter the intrest");
  scanf("%f",&intrest);
  printf("Enter the year");
  scanf("%f",&year);
  simple=principal*intrest*year/100;
  printf("simple= %f",simple);
  amount=principal*((pow((1+intrest/100),year)));
  compound=amount-principal;
  printf("compound= %f",compound);
   return 0;
}