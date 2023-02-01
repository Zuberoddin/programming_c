int mystrcmp(char*src,char*dst,int n);
#include<stdio.h>
#include<string.h>
main()
{
	int start=0;
	int c=0;
	int i,m,n;
	void *vptr;
	char src[100]="Hi hello Hi Hi";
	char dst[20]="Hi";
	m=strlen(src);
	n=strlen(dst);
	vptr=mystrcmp;
	for(i=0;i<=(m-n);)
	{
		start=((int(*)(char*,char*,int))vptr)(&src[i],dst,n);
		if(start==0)
		{
			c++;
			i=i+n;
		}
		i++;
	}
	printf("%s- %d\n",dst,c);
}

int mystrcmp(char*src,char*dst,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(src[i]!=dst[i])
			return 1;
	}
	return 0;
}
