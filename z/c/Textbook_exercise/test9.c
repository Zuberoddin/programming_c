/*Program to print prime numbers for the range of numbers */

#include<stdio.h>

void main()
{
	int min,max,i,j,rem,count=0;
	printf("Prime numbers in a given range\n");
	printf("--------------------------------\n");
	printf("Enter the range(min:max): ");
	scanf("%d:%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			rem=i%j;
			if(rem==0)
				count++;
		}
		if(count==2)
			printf("%d\n",i);
	}
}
