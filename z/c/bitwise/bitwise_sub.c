//substraction of two numbers using bitwise operators
#include<stdio.h>
int sub(int x,int y)
{
	while(y!=0)
	{
	int borrow=(~x)&y;
	x=x^y;
	y=borrow<<1;
	}
return x;
}

int main()
{
	int x=5,y=3,res=0;
	res=sub(x,y);
	printf("%d\n",res);
}
