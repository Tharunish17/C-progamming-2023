#include<stdio.h>
int main()
{ 
  float a,b,c;
  printf("Enter the sides of the triangle");
  scanf("%f %f %f",&a,&b,&c);
  if (a==b && b==c && a==c)
    printf("Its a equilateral triangle");
  else if (b==c || a==c || a==b)
   printf("Its a isosceles triangle");
  else 
    printf("Its a scalane");
    return 0;   
}
