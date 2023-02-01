#include<stdio.h>
main()
{
	int x=10;
	int y=20;
	const int*const ptr=&x;
//	*ptr=20;//you can't be modified
//	ptr=&y;// you can't be modified
}
