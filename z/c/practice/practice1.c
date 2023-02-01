#include<stdio.h>
main()
{
	int i,arr[5]={25,40,55,70,85},*p=arr;
	for(i=0;i<5;i++)
	printf("%d\n",*p++);
	printf("\n");
	for(i=0;i<5;i++)
	printf("%d\n",*--p);
	printf("\n");
	
	return 0;
}
