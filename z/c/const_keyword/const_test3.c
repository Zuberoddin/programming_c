#include<stdio.h>
void main()
{
	const char x=10;//here we are applying const keyword so data can't be changed when we are using variable name
	char*ptr=&x;//here we are not applying const keyword so that we can access by using its address
	printf("%d\n",x);//10
	*ptr=11;
	printf("%d\n",x);//11
}

