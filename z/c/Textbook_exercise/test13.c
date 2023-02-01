/*Find out the quotient and remainder whith out using %(&)/ */

#include<stdio.h>

int rem(int num,int temp)
{
	int rem;
	rem=num;
	while(temp>=0)
	{
		rem=rem-temp;
		if(rem<0)
			return rem;
	}
}

int quotient(int num,int temp)
{
	int count=0,rem;
	rem=num;
	while(temp>=0)
	{
		rem=rem-temp;
		count++;
		if(rem<0)
			return count;
	}
}


void main()
{
	int num,num1,res,temp,opt;
	while(1)
	{
		printf("----------------------------------------------------------------\n1.Remainder\n2.Quotient\n0.Exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: 
				exit(0);
			case 1:
				
				printf("Enter the value: ");
				scanf("%d:%d",&num,&num1);
				temp=num1;
				res=rem(num,temp);
				if(res==0)
					printf("%d\n",res);
				else
					printf("%d\n",res+num1);
				break;
			case 2:
				printf("Enter the value: ");
				scanf("%d:%d",&num,&num1);
				temp=num1;
				res=quotient(num,temp);
				printf("%d\n",res-1);
				break;

		}
	}
}

