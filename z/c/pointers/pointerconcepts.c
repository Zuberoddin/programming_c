/*
//program By using intiger pointer
#include<stdio.h>
int main()
{
int x=10;
int *ptr=NULL;
ptr =&x;
*ptr=20;
printf("%p-%d-%d-%d\n",&x,x,sizeof(&x),sizeof(x));
printf("%p-%d\n",ptr,sizeof(ptr));
printf("%d-%d\n",*ptr,sizeof(*ptr));
printf("%p-%d\n",&ptr,sizeof(&ptr));
}

//program by using char pointer
#include<stdio.h>
int main()
{
int x=10;
char *ptr=NULL;
ptr =&x;
*ptr=20;
printf("%p-%d-%d-%d\n",&x,x,sizeof(&x),sizeof(x));
printf("%p-%d\n",ptr,sizeof(ptr));
printf("%d-%d\n",*ptr,sizeof(*ptr));
printf("%p-%d\n",&ptr,sizeof(&ptr));
}

//program by using short int
#include<stdio.h>
int main()
{
int x=10;
short int *ptr=NULL;
ptr =&x;
*ptr=20;
printf("%p-%d-%d-%d\n",&x,x,sizeof(&x),sizeof(x));
printf("%p-%d\n",ptr,sizeof(ptr));
printf("%d-%d\n",*ptr,sizeof(*ptr));
printf("%p-%d\n",&ptr,sizeof(&ptr));
}
*/
//program by using float
#include<stdio.h>
int main()
{
int x=10;
float *ptr;
ptr =&x;
*ptr=20;
printf("%p-%d-%d-%d\n",&x,x,sizeof(&x),sizeof(x));
printf("%p-%d\n",ptr,sizeof(ptr));
printf("%d-%d\n",*ptr,sizeof(*ptr));
printf("%p-%d\n",&ptr,sizeof(&ptr));
}
/*
//program by using double
#include<stdio.h>
main()
{
	double x=10;
	double *ptr=NULL;
	ptr=&x;
	*ptr=20;
	printf("%p-%d-%ld-%d\n",&x,x,sizeof(&x),sizeof(x));
	printf("%p-%ld\n",ptr,sizeof(ptr));
	printf("%ld-%ld\n",*ptr,sizeof(*ptr));
	printf("%p-%lld\n",&ptr,sizeof(&ptr));
}

#include<stdio.h>
main()
{
	int x=10;
	double *ptr=NULL;
	ptr=&x;
	*ptr=20;
	printf("%p-%d-%ld-%d\n",&x,x,sizeof(&x),sizeof(x));
	printf("%p-%ld\n",ptr,sizeof(ptr));
	printf("%d-%ld\n",*ptr,sizeof(*ptr));
	printf("%p-%lld\n",&ptr,sizeof(&ptr));
}
*/
















