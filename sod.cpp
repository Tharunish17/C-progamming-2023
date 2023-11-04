#include<stdio.h>
int main()
{
int n, reverse=0,i,rem,t;    
printf("Enter a number");    
  scanf("%d", &n); 
  t=n;   
  for(i=0;n>0;i++)    
  {    
     rem=n%10;    
     reverse=reverse+rem;    
     n/=10;    
  }  
  printf("The sum of digits is %d",reverse);
}
