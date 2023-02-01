#include<stdio.h>
main()
{
	int num,rem,sum=0,i=1,temp,min,max;
	printf("enter the number:\n");
	scanf("%d %d",&min,&max);
	while(min<=max)
	{
		sum=0;
		i=1;
		temp=min;
		while(temp!=0)
		{
			rem=temp%10;
			if(rem>1)
			{
				break;
			}
			temp=temp/10;
			sum=sum+i*rem;
			i=i*2;
		}
		if(rem>1)
		{
			min++;
			continue;
		}
		printf("%d %d\n",min,sum);
		min++;
	}
}
