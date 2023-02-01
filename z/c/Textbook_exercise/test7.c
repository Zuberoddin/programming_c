/*Program for range of numbers in which number is equal to sum of multiples of that number
 * or is the given number is a prefect number or not*/



#include<stdio.h>

void main()
{
	int min,max,i,j,rem,sum=0;
	printf("Perfect number\n");
	printf("--------------\n");
	printf("Enter the range of values(min:max): ");
	scanf("%d:%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			rem=i%j;
			if(rem==0)
			{
				sum=sum+j;
			}

		}
		if(sum==i)
			printf("%d is a prefect number\n",sum);
		/*else
			printf("%d is not a prefect number\n",sum);*/
	}
}
