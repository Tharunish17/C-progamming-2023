#include<stdio.h>
int main()
{ 
    int a;
  printf("ENTER THE YEAR");
  scanf("%d",&a);
  if (a%4==0 && (a%100!=0 || a%400==0)) 
    {
    	int a;
		printf("Enter the month number");
		scanf("%d",&a);
	 if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    	 printf("31");
    else  if (a==4 || a==6 || a==9 || a==11)
    	printf("30");
    	  printf("29");
	}
  else 
  {
   	int a;
		printf("Enter the month number");
		scanf("%d",&a);
	 if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    	 printf("31");
    else  if (a==4 || a==6 || a==9 || a==11)
    	printf("30");
    else 
    	printf("28");
  }
  return 0;
}