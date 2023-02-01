#include<stdio.h>
main()
{
	int num,rem,sum=0,i=1,temp,min,max;
	printf("Enter the number :\n");
	scanf("%d %d",&min,&max);

repeat: sum=0;
	i=1;
	temp=min;
fun:
	rem=temp%10;
	if(rem>1)
	{
		min++;
		if(min<max)
		goto repeat;
	}
		temp=temp/10;
		sum=sum+i*rem;
		i=i*2;
	if(temp!=0)
	{
		goto fun;
	}
	printf("%d %d\n",min,max);
	min++;
	if(min<max)
		goto repeat;
}


