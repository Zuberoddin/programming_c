#include<stdio.h>
#include<math.h>
void main()
{
	int num,sum=0,power;
	printf("enter num:\n");
	scanf("%d",&num);
	printf("enter power:\n");
	scanf("%d",&power);
	//sum=num*num;
	sum=pow(num,power);
	printf("%d^%d\n%d\n",num,power,sum);
}
