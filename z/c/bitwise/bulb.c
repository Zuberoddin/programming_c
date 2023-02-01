#include<stdio.h>
main()
{
	int switchh = 1;
	int bulb = 0xff;
	switchh=switchh&bulb;
	printf("%d\n",switchh);
	switchh=switchh|bulb;
	printf("%d\n",switchh);
}
