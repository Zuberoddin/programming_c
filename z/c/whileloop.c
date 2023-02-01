//Count the number of digits
/*
#include<stdio.h>
main()
{
	int num;
	int count=0;
	printf("Enter the num:\n");
        scanf("%d",&num);
	if(num!=0)
	{
		while(num!=0)
		{
		num=num/10;
		count++;
		}
		printf("%d\n",count);
	}
	else
 		printf("%d\n",count++);
}
*/

#include<stdio.h>
main()
{
	int min,max,a,b,count=0,temp=0,n;
	printf("Enter the min&max\n");
	scanf("%d %d",&min,&max);
	if(min>max)
	{
		temp=a;
		a=b;
		b=temp;
	}
	while(min<=max)
	{
		n=min;
		while(min!=0)
		{
		min=min/10;
		count++;
		}
		min=n;
		printf("%d has %d digits \n",min,count);
		count=0;
		min++;
	}
}



