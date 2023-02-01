/* Amstrong number or not*/
#include<stdio.h>
int cube(int num)
{
	int temp,rem,sum=0;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=rem*rem*rem+sum;
		temp=temp/10;
	}
		//printf("%d\n",sum);
		return sum;
}

void main()
{
	int num,res;
	printf("Armstrong number or not\n");
	printf("-----------------------\n");
	scanf("%d",&num);
	res=cube(num);
	if(res==num)
		printf("Amstrong\n");
	else
		printf("not amstrong\n");
}
