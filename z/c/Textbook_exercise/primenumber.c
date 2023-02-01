#include<stdio.h>
int PFactors(int num);
main()
{
	int n;
	PFactors(n);
}
int PFactors(int num)
{
	int i=2;
	if(num==1)
		return;
	while(num%i!=0)
		i++;
	printf("%d ",i);
	PFactors(num/i);
}
