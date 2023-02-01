/*
 * Program to find the product of digits of a given number until it becomes a single digit
 * */

#include<stdio.h>

void prodigits(int num)
{
	int temp,rem,sum=1;
	temp=num;
a:sum=1;
	while(temp!=0)
	{
		rem=temp%10;
		sum=rem*sum;
		temp=temp/10;
	}
	//printf("%d\n",sum);
	if(sum>=10)
	{
		temp=sum;
		goto a;
	}

		printf("%d\n",sum);
}


void main()
{
	int num;
	printf("The product of digits of a given number until it becomes a single digit\n");
	printf("------------------------------------------------------------------------\n");
	scanf("%d",&num);
	prodigits(num);
}

