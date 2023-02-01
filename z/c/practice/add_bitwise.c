#include<stdio.h>
void addition(int *ptr1,int *ptr2);
main()
{
	int x=10;
	int y=5;
	addition(&x,&y);
}
void addition(int *ptr1,int *ptr2)
{
	int z;
	z=(((0x08)|(0x02))|((0x04)|(0x01)));
	printf("%d\n",z);
}
