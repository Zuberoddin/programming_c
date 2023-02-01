#include<stdio.h>
void main()
{
	int *ptr[4];
	int x=10;
	int y=20;
	int z=30;
	int v=40;
	int i;
	ptr[0]=&v;
	ptr[1]=&z;
	ptr[2]=&y;
	ptr[3]=&x;
	for(i=0;i<4;i++)
	{
	printf("%p\n",ptr[i]);
	printf("%p\n",*ptr[i]);
	printf("%p-%p-%d\n",&ptr[i],ptr[i],*ptr[i]);
	}
}
