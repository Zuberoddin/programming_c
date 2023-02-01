//Program for detecting byte order format whether it is little endian or big endian
#include<stdio.h>
main()
{
	unsigned int x=0x11223344;
	unsigned char y;
	y=x;
	if(y&0xff<<0)
	{
		printf("It follows little endian format %x\n",y);
	}
	else
	{
		printf("It follows big endian format %x\n",y);
	}
}

