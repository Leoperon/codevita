#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,c=0;
	printf("Enter the range to find prime number:");
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=n;i<m;i++)
	{
		for(int j=1;j<=i;j++)
		{
		   if(i%j==0)
	       {
			  c++;
	       }
		}
		if(c==2)
		{
			printf("\nPrime No:%d",i);
		}
		c=0;
	}
	return 0;
}
