#include<stdio.h>
#include<conio.h>
int main()
{
	double c,feet,inch;
	printf("Enter the height in Centimeters:");
	scanf("%lf",&c);
	feet=c*0.0328084;
	inch=c*0.393701;
	printf("\nFeet:%f",feet);
	printf("\nInches:%f",inch);
	return 0;
}
