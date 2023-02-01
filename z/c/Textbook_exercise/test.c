/*Whethere the given two numbers are amicable or not*/

#include<stdio.h>

void main()
{
	int num,num1,i,temp,rem,sum=0,sum1=0;
	printf("The two numbers are amicable or not\n");
	printf("-----------------------------------\n");
	printf("Enter the values(num:num1): ");
	scanf("%d:%d",&num,&num1);
	for(i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	temp=sum;
	for(i=1;i<sum;i++)
	{
		rem=temp%i;
		if(rem==0)
			sum1=sum1+i;
	}
	if(num==sum1)
		printf("%d and %d are amicable numbers\n",sum,sum1);
	else
		printf("They are not amicable numbers\n");
}
