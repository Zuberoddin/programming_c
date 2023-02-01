#include<stdio.h>
int x;
main()
{
	x = 30;
	int y = 40;
	printf("%d\n",y);
	{
		y = 50;
		printf("%d\n",y);
		int z = 60;
		printf("%d\n",z);
	}
	printf("%d\n",x);
}
