#include<stdio.h>
#include<string.h>

void main()
{
	char *arr;
	arr=strchr("SAIVIVEK",'V');
	printf("%s\t",arr);
	arr=strrchr("SAIVIVEK",'v');
	printf("%s\n",arr);
}

