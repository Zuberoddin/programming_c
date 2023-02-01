//understanding function concept using switch cases
#include<stdio.h>
//function declarations
int reverse_integer(int num);
int binary_decimal(int bin);
int decimal_binary(int num1);
int sum_digits(int num2);
int polyndrome_problem(int num3);
void main(void)
{
	int num,opt,res,bin,num1,num2,num3;
	while(1)
	{
		printf("Menu\n 0.exit\n 1.reverse_integer\n 2.binary_decimal\n 3.decimal_binary\n 4.sum_digits\n 5.polyndrome_problem\n");
		printf("select the option\n");
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
		       
		case 3:
		       printf("Enter the num:\n");
		       scanf("%d",&num1);
		       	__fpurge(stdin);
		       	
		       res=decimal_binary( num1); //function invocation
		       
		       printf("%d\n",res);
		       break;
		case 4:
		       printf("Enter the num:\n");
		       scanf("%d",&num2);
		       
		       res= sum_digits(num2); //function invocation
		       
		       printf("%d\n",res);
		       break;
		case 5:
		       printf("Enter the num:\n");
		       scanf("%d",&num3);
		       
		       res=polyndrome_problem(num3); //function invocation	       		       		
		       printf("%d",res);
		       
		       break;
		}
	}
}
//function definations
int reverse_integer(int num)
{
	int sum=0,temp,rem;
	//printf("Input is recieved from the user %d:\n",num);
	temp=num;
	while(temp!=0)
	{

		rem=temp%10;
		
		temp=temp/10;
		sum=sum*10+rem;
		
	}
	return sum;
}
int binary_decimal(int bin)
{
	int i=1,temp,sum=0,rem;
		temp=bin;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum+i*rem;
			i=i*2;
		}
		return sum;
}
int decimal_binary(int num1)
{
	int i=1,temp,sum=0,rem;
		temp=num1;
		while(temp!=0)
		{
			rem=temp%2;
			temp=temp/2;
			sum=sum+i*rem;
			i=i*10;
		}
		return sum;
}
int sum_digits(int num2)
{
	int temp=0,rem,sum=0;
	     temp=num2;
	     while(temp>0)
		     {
		     rem=temp%10;
		     temp=temp/10;
		     sum=sum+rem;
	              }
	     return sum;
}
int polyndrome_problem(int num3)
{
	int temp=0,sum=0,rem;
	     temp=num3;
	     sum=0;
	     while(temp!=0)
	     {
		     rem=temp%10;
		     temp=temp/10;
		     sum=sum*10+rem;
	     }
		     if(sum==num3)
		     {
			     printf("It is a palindrome\n");
		     }
		     else
		     {
			     printf("It is not a palindrome\n");
			     }	
 	     return sum;
}

























