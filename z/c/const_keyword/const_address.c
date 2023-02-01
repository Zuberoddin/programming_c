#include<stdio.h>
main()
{
	int x=10;
	int*const ptr=&x;
	*ptr=20;
	int y=30;
	//ptr=&y;
	  printf("%p\n",ptr);
	  printf("%d\n",x);
}

