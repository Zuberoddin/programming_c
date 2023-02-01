#include<stdio.h>
main()
{
	int arr[4]={10,20,30,40};
	int x=100,*ptr=arr;
	printf("%p\t%d\t%d\n",ptr,*ptr,x);
}
