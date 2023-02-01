/*
//search for a strinig Hi

int mystrcmp(char*src,char*dst,int n);
#include<stdio.h>
#include<string.h>
main()
{
	int start=0;
	int c=0;
	int i,m,n;
	char src[100]="Hi hello Hi Hi";
	char dst[20]="Hi";
	m=strlen(src);
	n=strlen(dst);
	for(i=0;i<=(m-n);)
	{
		start=mystrcmp(&src[i],dst,n);
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

*/
//Hi replaced with Bye


char*replaced_with_bye(char*replace);
int mystrcmp(char*src,char*dst,int n);
#include<stdio.h>
#include<string.h>

	char src[100]="Hi hello Hi Hi";
main()
{
	int start=0;
	int c=0;
	int i,m,n;
	char dst[20]="Hi";
	m=strlen(src);
	n=strlen(dst);
	for(i=0;i<=(m-n);)
	{
		start=mystrcmp(&src[i],dst,n);
		if(start==0)
		{
			c++;
			i=i+n;
		}
		i++;
	}

	printf("%s- %d\n",dst,c);
//	printf("after performing replacing operation\n");
//	for(j=0;j<=(m-n);j++)
//	{
//	replace[i]=dst[i];
//
//	printf("%s\n",replace);
//	}
	replaced_with_bye(replace);
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

char*replaced_with_bye(char*replace)
{
	int i;
	ptr=(char*)malloc(20*sizeof(char));
	char replace[20]="Bye";
	ptr=replace;
	if("Hi"="Bye")
	src[i]=replace[i]
	{
		printf("%s\n",ptr);
	}
}


