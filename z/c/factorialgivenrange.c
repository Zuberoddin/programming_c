//factorial for a given range of values
/*
#include<stdio.h>
main()
{
	int i,fact=1,min,max,temp;
	printf("Enter the ranges a b\n");
	scanf("%d %d",&min,&max);
	for(min;min<=max;min++)
	{
		temp=min;
		fact=1;
		for(i=1;i<=temp;i++)
		{
			fact=fact*i;
		}
		printf("The values of given range of factorial numbers:%d\n",fact);               
	}
}
*/
#include<stdio.h>
main()
{
	int i,fact=1,min,max,temp;
	printf("Enter the ranges a b\n");
	scanf("%d %d",&min,&max);
	for(min;min<=max;min++)
	{
		temp=min;
		fact=1;
		for(i=1;i<=temp;i++)
		{
			fact=fact*i;
		}
		printf("The values of given range of factorial numbers:%d\n",fact);               
   		min++;
	}
}

