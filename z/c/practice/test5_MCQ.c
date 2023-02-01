/*
#include<stdio.h>
main()
{
	char *ptr="Ramco systems";
	(*ptr)++;
	printf("%s\n",ptr);
	ptr++;
	printf("%s\n",ptr);
}
*/
/*
#include<stdio.h>
main()
{
	int *a;
	int (*b)();
	printf("%d-%d\n",sizeof(a),sizeof(b));
}
*/
/*
#include<stdio.h>
main()
{
	int X,b=7;
	X=b>8?b<<3:b>4?
	b>>1:b;
	printf("%d",X);
}
*/
/*
#include<stdio.h>
main()
{
	unsigned int i=-10,j=10;
	if(j<i)
	printf("True");
	else
	printf("False");
	printf("%d %u",i,i);
}
*/
/*
#include<stdio.h>
main()
{
	int i=10;
	switch(i)
	{
		case 10:printf("Hello");
		{
			case 1:printf("World");
		}
		case 5:printf("Hello World");
	}
}
*/
/*
#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5,6,7};
	char c[]={'a','x','h','o','k'};
	printf("%d %d\n",&a[3]-&a[0],&c[3]-&c[0]);
	printf("%d %d\n",a[3]-a[0],c[3]-c[0]);
}
*/
#include<stdio.h>
main()
{
	int a[]={10,20,30,40,50};
	char *p;
	p=(char*)a;
	printf("%d\n",*((int *)p+4));
}

























