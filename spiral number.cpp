#include<stdio.h>
int main()
{
	int n,i,p,k,b,c,d;
	printf("Enetr the value of n");
	scanf("%d",&n);
	int a[n][n];
	k=1;
	for(i=0;i<(n+1)/2;i++)
	{
		for(p=i;p<n-i;p++)
		 a[i][p]=k++;
		 for(b=i+1;b<n-i;b++)
		 a[b][n-i-1]=k++;
		 for(c=n-i-2;c>i;c--)
		  a[n-i-1][c]=k++;
		 for(d=n-i-1;d>i;d--)
		  a[d][i]=k++;
	}
	for(i=0;i<n;i++)
	{         
		for(p=0;p<n;p++)
		 {      
		 	printf("%d \t",a[i][p]);
		 }                 
		 printf("\n");
	}
}
