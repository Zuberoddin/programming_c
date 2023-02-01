int polindrome_problem(int num1);

int factorial_problem(int num2);

void main(void)
{
	int num1,num2,res,opt;
	while(1)
	{
		printf("Menu\n select the option\n 0.exit 1.polindrome_problem\n 2.factorial_problem\n");
		scanf("%d",&opt);
		switch (opt)
		{
			case 0:exit(0);
			case 1:
				printf("Enter the number:\n");
				scanf("%d",&num1);
				__fpurge(stdin);
				res=polindrome_problem(int num1);
				printf("%d\n",res);
				break;
			case 2:
				printf("Enter the ranges a b\n");
				scanf("%d",&num2);
				__fpurge(stdin);
				res=factorial_problem(int num2);
				printf("%d",res);
				break;
		}
	}
}

int polindrome_problem(int num1)
{
	int temp=0,sum=0,rem,num1;
	     temp=num1;
	     sum=0;
	     while(temp!=0)
	     {
		     rem=temp%10;
		     temp=temp/10;
		     sum=sum*10+rem;
	     }
		     if(sum==num1)
		     {
			     printf("It is a palindrome\n");
		     }
		     else
		     {
			     printf("It is not a palindrome\n");
		     }	
 	     return sum;
}

int factorial_problem(int num2)
{
	int num2,i,fact=1;        
	printf("Enter the number:\n");
	scanf("%d",&num2);
	for(i=1;i<=num2;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d:",num2,fact);	
}

