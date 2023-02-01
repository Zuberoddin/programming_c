#include<stdio.h>
main()
{
	int ret;
	printf("wel\0come\n");
        ret=("wel\0come\n");
	printf("%d\n",sizeof("wel\0come\n"));
}
