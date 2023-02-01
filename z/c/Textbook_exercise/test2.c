/*Program to print the pair of amicable numbers for given range of numbers*/

#include<stdio.h>

void main()
{
	int min,max,i,j,k,rem,sum=0,sum1=0,temp;
	printf("The pair of amicable numbers for given range of numbers\n");
	printf("--------------------------------------------------------\n");
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
		sum1=0;
		temp=sum;
		for(k=1;k<sum;k++)
		{
			rem=temp%k;
			if(rem==0)
				sum1=sum1+k;
		}
		if(sum1==i)
		{
			printf("%d\t%d are amicable number\n",sum1,sum);
		}
		else
			printf("%d has no amicable pair number\n",i);
        }
}

