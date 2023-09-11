#include<stdio.h>
int main() 
{ 
  int d,m,y;
  printf("Enter the date/");
  printf("Enter the month/");
  printf("Enter the year/");
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if (y%4==0 && (y%100!=0 || y%400==0))
  {   
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        { 
		if (d<=31)
		  printf("%d/ %d/ %d/",d++,m,y);
		else
		   printf("INVALID");
		}
	else if (m==4 || m==6 || m==9 || m==11)
	    { 
	      if (d<=30)
	       printf("%d/ %d/ %d",d++,m,y);
	      else 
	       printf("INVALID");
		}
	else 
	    {
	      if (d<=29);
	      printf("%d/ %d/ %d",d++,m,y);
		}
  }
  else
     {   
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        { 
		if (d<=31)
		  printf("%d/ %d/ %d",d++,m,y);
		else
		   printf("INVALID");
		}
	else if (m==4 || m==6 || m==9 || m==11)
	    { 
	      if (d<=30)
	       printf("%d/ %d/ %d",d++,m,y);
	      else 
	       printf("INVALID");
		}
	else 
	    {
	      if (d<=28);
	      printf("%d/ %d/ %d",d++);
		}
  }
   return 0;
}
