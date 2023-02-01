//using void pointer implement addition program
int add(int,int);
#include<stdio.h>
main()
{
	int a=10,b=20,res;
	void *vptr;
	vptr=add;
	//res=add(a,b);
	res=((int(*)(int,int))vptr)(a,b);
	
	//printf("%d\n",res);
	printf("%d\n",res);
}
int add(int a,int b)
{
	return (a+b);
}





