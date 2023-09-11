#include<stdio.h>
int main() 
{ 
  int d,m,y;
  printf("Enter the date/");
  printf("Enter the month/");
  printf("Enter the year");
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if (m>0 && m<=12)
{
  if (y%4==0 && (y%100!=0 || y%400==0))
  {   
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        { 
		if (d<=31)
		{
		 if (d<31)
		    {
		      d++;
		      printf("%d/ %d/ %d",d,m,y);
			}
			   else if (d==31) 
	   {
	   if (m<12)
	   {
		m++;
	   	printf("1/ %d/ %d",m,y);
	   }
	   else if (m==12)
	   { 
	    y++;
	    printf("1/ 1/ %d",y);
	   }
	   else 
	     printf("Invalid");
	   }
}
	   else
	    printf("INVALID");
		}
	else if (m==4 || m==6 || m==9 || m==11)
	    { 
	      if (d<=30)
	     {
		  if (d<30)
		  {
		  d++;
	       printf("%d/ %d/ %d",d,m,y);
	} 
	    else 
	    {
	    	m++;
	    	printf("1/ %d/ %d",m,y);
		}
	     
		}
	      else 
	       printf("INVALID");
		}
	else if (m=2)
	    {
	      if (d<=29)
	      { 
	       if (d<29)
	      {
		    d++;
	       printf("%d/ %d/ %d",d,m,y);
	}
	       else 
	       { 
		   m++;
		   printf("1/ %d/ %d",m,y);	          
		   }
		  }
	      
	      else
	       printf("INVALID");
		}
	else if (m>12)
	  printf("INVALID");
  }
  else  
     {   
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        { 
		if (d<=31)
	{
		if (d<31)
		{
		  d++;
		  printf("%d/ %d/ %d",d,m,y);
	}
	   else if (d==31) 
	   {
	   if (m<12)
	   {
		m++;
	   	printf("1/ %d/ %d",m,y);
	   }
	   else if (m==12)
	   { 
	    y++;
	    printf("1/ 1/ %d",y);
	   }
	   else 
	     printf("Invalid");
	   }
}
	   else
	    printf("INVALID");
		}
	else if (m==4 || m==6 || m==9 || m==11)
	    { 
	      if (d<=30)
	     { 
		 if (d<30)
		  {
		    d++;
	       printf("%d/ %d/ %d",d,m,y);
	    }
	    else 
	    { 
	     m++;
	     printf("1/ %d/ %d",m,y);
		}
}
	      else 
	       printf("INVALID");
		}
	else if (m=2)
	    {
	      if (d<=28)
	      { 
	        if (d<28)  
	      {
		  d++;
	      printf("%d/ %d/ %d",d,m,y);
	  }
	       else 
	       {
	       	m++;
	       	printf("1/ %d %d",m,y);
		   }
	}
	    else 
		  printf("INVALID");   
	    }
	
  }
}
  else 
    printf("INVALID");
   return 0;
}