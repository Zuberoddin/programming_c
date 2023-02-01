/*Program to print given no. table up to 10 no.
 * */
#include<stdio.h>

void table(int num)
{
	int sum=0,count=0;
	while(count<10)
	{
		sum=num+sum;
		printf("%d\n",sum);
		count++;
	}
}

void main()
{
	int num;
	printf("Number table of %d\n",num);
	printf("-----------------------\n");
	scanf("%d",&num);
	table(num);
}

