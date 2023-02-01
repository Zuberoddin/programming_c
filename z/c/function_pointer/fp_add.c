//using function pointer implement addition program
int add(int,int);
#include<stdio.h>
main()
{
	int a=10,b=20,res;
	int(*fptr)(int,int);
	fptr=add;
	//res=add(a,b);
	res=fptr(a,b);
	
	//printf("%d\n",res);
	printf("%d\n",res);
}
int add(int a,int b)
{
	return (a+b);
}





