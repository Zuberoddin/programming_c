#include<stdio.h>
int polyndrome(char*ptr);
main(int argc,char*argv[])
{
	int i,stat;
	for(i=0;i<argc;i++)
	{
		stat=polyndrome(argv[i]);
		if(stat==0)
			printf("%s\n",argv[i]);
	}
}
int polyndrome(char*ptr)
{
	int i,j;
	j=strlen(ptr);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		if(ptr[i]!=ptr[j])
			return -1;
	}
	return 0;
}
