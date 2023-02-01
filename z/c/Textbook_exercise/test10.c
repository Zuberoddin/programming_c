/*Return 1 for prime and 0 for not a prime number using functions */

#include<stdio.h>
int prime_numbers(int num)
{
	int i,rem,count=0;
	for(i=1;i<=num;i++)
	{
		rem=num%i;
		if(rem==0)
			count++;
	}
	if(count==2)
		return 1;
	else
		return 0;
}

void main()
{
	int num,res;
	printf("1=prime number\t0=Not a prime number\n");
	printf("Enter the value: ");
	scanf("%d",&num);
	res=prime_numbers(num);
	printf("%d\n",res);
}
