#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char str[100],strt[100];
	scanf("Enter any statement:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		while(str[i]!=' ')
		{
			strcpy(strt,str);
			i++;
		}
		strrev(strt);
	}
	puts(strt);
	return 0;
}

