#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
    char b[n];
    printf("Enter array values1");
    for(i=0;i<n;i++)
    	scanf("%s",&b[i]);
	 for(i=0;i<n;i++)
	 {
	 	if(b[i]=='a'||b[i]=='e' || b[i]=='i' || b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E' || b[i]=='I' || b[i]=='O'||b[i]=='U')
	  printf("%c\t",b[i]);
	 }
	}
	
