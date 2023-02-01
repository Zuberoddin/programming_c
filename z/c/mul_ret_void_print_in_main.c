#include<stdio.h>

void mul(int *ptr1,int*ptr2,int*ptr3);

void main()
{
	int a=10,b=20,c=1;
	mul(&a,&b,&c);
	printf("%d\n",c);
}
void mul(int *ptr1,int*ptr2,int*ptr3)
{
	*ptr3=(*ptr1)*(*ptr2);
}
