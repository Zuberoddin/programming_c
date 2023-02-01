#include<stdio.h>
main()
{
	int *ptr1=0x5000;
	int *ptr2=0x5008;
	printf("%d\n",(ptr2-ptr1));//2
}
