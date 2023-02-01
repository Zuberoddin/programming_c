#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,count0=0,count1=0;
	unsigned int x=16;
	for(i=0;i<31;i++)
	{
		while(x>0)
		{
			if(x&1)
				count1++;
			else
				count0++;
			x=x>>1;
		}
	}
	printf("count1=%d\n",count1);
	printf("count0=%d\n",count0);
}
