#include"myheader.h"
#include<stdlib.h>
#include<stdio_ext.h>
void main(void)
{
	int num,opt,res,bin,num1,num2;
	while(1)
	{
		printf("Menu\n 0.exit\n 1.reverse_integer\n 2.binary_decimal\n 3.decimal_binary\n 4.sum_digits\n 5.polyndrome_problem\n");
		printf("select the option\n");
		__fpurge(stdin);
		scanf("%d",&opt);
		switch(opt)
		{
		case 0:
			exit(0);
		case 1:
			printf("Enter the num:\n");
		       	scanf("%d",&num);
		       	__fpurge(stdin);
		       	
		       	res=reverse_integer(num); //function invocation
		       	
		       	printf("%d\n",res);
		       break;
		       
		case 2:
			printf("Enter binary input:\n");
		       scanf("%d",&bin);
		       	__fpurge(stdin);
		       
		       res=binary_decimal( bin); //function invocation
		       
		       printf("%d\n",res);
		       break;
		}
	}
}
