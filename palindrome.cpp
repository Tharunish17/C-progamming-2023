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
     reverse=reverse*10+rem;    
     n/=10;    
  }  
  if(reverse==t)
   printf("its an palindrome");
  else 
     printf("its not an palindrome");
    return 0;
}
