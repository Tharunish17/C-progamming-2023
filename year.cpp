#include<stdio.h>
int main()
{
  int a;
  printf("ENTER THE YEAR");
  scanf("%d",&a);
  if (a%4==0 && (a%100!=0 || a%400==0)) 
    printf("Its a leap year");
  else 
    printf("Its not a leap year");
  return 0;
}
