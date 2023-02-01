/*Program for factorial of a number*/


#include<stdio.h>

int factorial(int num)
{
	int i,temp;
	temp=num;
	for(i=1;i<num;i++)
	{
		temp=temp*i;
	}
	return temp;
}

void main()
{
	int num,res;
	printf("Factorial\n");
	printf("----------\n");
	printf("Enter the value: ");
	scanf("%d",&num);
	res=factorial(num);
	printf("%d\n",res);
}
