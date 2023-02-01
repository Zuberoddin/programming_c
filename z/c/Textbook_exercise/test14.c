/*Program to find leap year*/
#include<stdio.h>

int leap_year(int y)
{
	if(((y%100!=0)&&(y%4==0))||(y%400==0))
		return 1;
	else
		return 0;
}


void main()
{
	int res,y;
	printf("Enter a year: ");
	scanf("%d",&y);
	res=leap_year(y);
	if(res==1)
		printf("Is a leap year\n");
	else
		printf("Not a leap year\n");
}

