#include<stdio.h>


void rec(int);

int sum=0;
void main()
{
	int num=123;
	rec(num);
}
void rec(int num)
{
	int temp=num,rem;
	printf("%d\n",temp);
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;

	if(temp!=0)
	{
		rec(num);
	}
	printf("%d\n",sum);
}
