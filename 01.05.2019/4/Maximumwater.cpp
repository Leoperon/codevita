#include<stdio.h>
#include<conio.h>
int main()
{	
    double l;
    int amt,price;
	printf("Enter your amount:");
	scanf("%d",&amt);
	price=((50+60)*10)+100; //price=1200
	l=(double)amt/price;
	printf("Maximum water:%lf Litres",(l*10*20));
	return 0;
}
