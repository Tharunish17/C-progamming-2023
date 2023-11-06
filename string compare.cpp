#include<stdio.h>
int main()
{
	int n,i,size;
	printf("Enter the value of n");
	scanf("%d",&n);
    char a[n],b[n];
    printf("Enter array values1");
    for(i=0;i<n;i++)
    	scanf("%s",&a[i]); 
    printf("Enter array values2");
    for(i=0;i<n;i++)
    	scanf("%s",&b[i]);
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]==
		 b[i])
	 	size=1;
	 	else 
	 	 size=0;
	 }
	 if(size==1)
	  printf("They are equal");
	else
	 printf("They are not equal");
	}
	
