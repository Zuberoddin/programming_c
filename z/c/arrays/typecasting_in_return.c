/*
#include<stdio.h>
main()
{
	int x[5]={1,2,3,4,5};
	int *ptr=x;
	int ret;
	ret=(&ptr[2]-&ptr[0]);
	printf("%d\n",ret);//2
}
*/
/*
#include<stdio.h>
main()
{
	int x[5]={1,2,3,4,5};
	int *ptr=x;
	int ret;
	ret=((void*)&ptr[2])-((void *)&ptr[0]);
	printf("%d\n",ret);//8
}
*/

/*
#include<stdio.h>
main()
{
	int x[5]={1,2,3,4,5};
	int *ptr=x;
	int ret;
	ret=((char*)&ptr[2])-((char*)&ptr[0]);
	printf("%d\n",ret);//8
}
*/
#include<stdio.h>
main()
{
	int x[5]={1,2,3,4,5};
	int *ptr=x;
	int ret;
	ret=((short int*)&ptr[2])-((short int*)&ptr[0]);
	printf("%d\n",ret);//2
}
