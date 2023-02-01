/*
#include<stdio.h>
main()
{
	 unsigned int x=0xFFFFFFFF;
       	 (x&(1<<3)==0)?printf("bit is 0\n"):printf("bit is 1\n");
	 (x&(1<<7)==0)?printf("bit is 0\n"):printf("bit is 1\n");
}
*/
#include<stdio.h>
main()
{
	unsigned x=0x22334455;
	x=(x&~((0x1<<8)|(0x1<<24))|((x&(0x1<<8))<<(24-8))|((x&(0x1<<24))>>(24-8)));
}

