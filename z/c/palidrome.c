#include<stdio.h>
main()
{
	int num,rem,min,max,sum=0,temp;
	printf("Enter the numbers:\n");
	scanf("%d %d",&min,&max);
	while(min<=max)
	{
		temp=min;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum*10+rem;
		}
		if(sum==min)
		{
			printf("%d\n",sum==min);
			printf("The given number is palidrome\n");
		}
		min=temp;
		min++;
	}
}
