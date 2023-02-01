#include<stdio.h>
void main()
{
	int x=10;
	int y=20;
	const int *ptr;// declaring a integer pointer with const keyword
	ptr=&x;//using this we can update the address
	printf("%d\n",*ptr);//10
//	*ptr=30;compilation error
	ptr=&y;//using this we can update the address
	printf("% d\n",*ptr);//20
	x=30;//it will update the data in x because it didn,t initialize with const keyword
	printf("%d\n",x);
}
