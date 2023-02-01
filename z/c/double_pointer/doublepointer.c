#include<stdio.h>
main()
{
	int x=10;
	int *ptr=&x;
	int **dptr=&ptr;
	//for single pointer
	printf("%p\n",ptr);//0x7fff956c4cc4
	printf("%p\n",&ptr);//0x7fff956c4cc8
	printf("%d\n",*ptr);//10
	//for double pointer
	printf("%p\n",dptr);//0x7fff956c4cc8
	printf("%p\n",&dptr);//0x7fff956c4cd0
	printf("%p\n",*dptr);//0x7fff956c4cc4
	printf("%d\n",**dptr);//10 
}








