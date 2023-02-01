#include<stdio.h>
int main()
{
	int i;
        int num=7;
        int sum=0;
        int c=0;
	for(i=1;i<6;i++)
	{
		if(num%i==0)
		{
			c++;
			sum+=i;
			printf("factor::%d\n",i);
		}

	}
	printf("count of factor::%d\n",c);
	if(sum==num)
	
		printf("perfect num:%d\n",sum);
	else
		printf("not perfect num\n");
}
