#include<stdio.h>
#include<math.h>
int main()
{
 int i,n,rem,dum,bin,t,m;
 dum=0;
 printf("Enter a number");
 scanf("%d",&n);
 if (n%2==0)
    t=0;
  else 
   t=1;
 for(i=0,m=0;n>0;i++,m++)
  {
	  rem=n%2;
  	dum=dum+rem*(pow(10,i));
    n=n/2;
  }
  printf("Its binary:%d",dum);
  return 0;
}