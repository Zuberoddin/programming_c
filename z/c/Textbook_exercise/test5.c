/*Program for product and sum of multiples of a given number*/

#include<stdio.h>
#include<stdlib.h>

//Function for multiples of a number
void multiples(int num)
{
        int rem,i;
        for(i=1;i<num;i++)
        {
                rem=num%i;
                if(rem==0)
                {
                        printf("%d\n",i);
                }
        }
}

//Function for product of multiples
int product(int num)
{
	int rem,pro=1,i;
	for(i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			pro=pro*i;
		}
	}
	return pro;
}

//Function for sum of multiples
int sum(int num)
{
        int rem,sum=0,i;
        for(i=1;i<num;i++)
        {
                rem=num%i;
                if(rem==0)
                {
                        sum=sum+i;
                }
        }
        return sum;
}

//Main Function
void main()
{
	int num,res,opt;
	while(1)
	{
		printf("Main menu\n1.Multiples\n2.Product of multiples\n3.Sum of multiples\n0.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
				exit(0);
			case 1:
				printf("Enter the value: ");
				scanf("%d",&num);
				multiples(num);
				break;
			case 2:
				printf("Enter the value: ");
				scanf("%d",&num);
				res=product(num);
				printf("%d\n",res);
				break;
			case 3:
				printf("Enter the value: ");
				scanf("%d",&num);
				res=sum(num);
				printf("%d\n",res);
				break;
			default:
				printf("Invalid input\n");
		}
	}
}

