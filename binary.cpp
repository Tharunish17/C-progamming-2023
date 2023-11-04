#include<stdio.h>  
 int main()    
{    
int n, reverse=0, rem,reverse1=0,rem1;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%2;    
     reverse=reverse*10+rem;    
     n/=2;    
  } 
    while(reverse!=0)    
  {    
     rem1=reverse%10;    
     reverse1=reverse1*10+rem1;    
     reverse/=10;    
  }    
  printf("Reversed Number: %d",reverse1);    
return 0;  
}   