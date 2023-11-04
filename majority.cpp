#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d values of array",n);
	int c;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
    { 
		for(j=0,count=0;j<n;j++)
	{
	  if(a[i]==a[j])
	    count++;
	}
	if(count>n/2)
	  {
	  printf("%d is the majority",a[i]);
	  c=1;
	  break;
}
       else c=0;
}
  if(c==0)
 printf("No majority exist");
   return 0;
}