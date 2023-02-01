//using function pointer implement multiplication 
int mul(int a,int b);
#include<stdio.h>
main()
{
	int a,b,res;
	printf("enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	void *vptr;
	vptr=mul;
	res=((int(*)(int,int))vptr)(a,b);
	printf("%d\n",res);
}
int mul(int a,int b)
{
	return (a*b);
}

