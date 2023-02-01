#include<stdio.h>
void swap_arithmetic(int,int);
void main()
{
	int a,b;
	printf("Enter the inputs:\n");
	scanf("%d %d",&a,&b);
	swap_arithmetic(a,b);
	//printf("%d\n",res);
}
void swap_arithmetic(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d\n",a,b);
}

