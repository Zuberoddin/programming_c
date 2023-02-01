#include<stdio.h>

int sum_all_digits(num);
int sum=0;
void main()
{
	int num=1230,sum=0,res;
	res=sum_all_digits(num);

	printf("%d\n",res);
}
int sum_all_digits(num)
{
	int rem;
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	if(num!=0)
	{
		sum_all_digits(num);
	}
	else
		return sum;
}
