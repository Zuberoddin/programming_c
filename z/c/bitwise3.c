/*
main()
{
	unsigned int x=0xABCDEF97;
	x=x|(0x7<<4);
	printf("%x\n",x);
}
*/

#include<stdio.h>
main()
{
	char x=0x80;
	x=x>>4;
	printf("%x\n",x);
}
