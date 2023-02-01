#include<stdio.h>
main()
{
	unsigned int x;
	unsigned int bit1,bit2;
	printf("Enter the input:\n");
	scanf("%x",&x);
	printf("Enter the bits to be swapped bit:bit2(0-31)\n");
	scanf("%d:%d",&bit1,&bit2);
	((bit1>=0)&&(bit1<=31))?0:(printf("Invalid input\n",exit(o));
	((bit2>=0)&&(bit2<=31))?0:(printf("Invalid input\n",exit(o));
	(bit>bit2)?(temp=bit1,bit1=bit2,bit2=temp):0;
	x=(x&~((0x1<<bit2)|(0x1<<bit1))|((x&(0x1<<bit1)<<
	
