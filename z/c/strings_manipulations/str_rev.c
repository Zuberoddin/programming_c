#include<stdio.h>
char*mysrc_rev(char*src);
main()
{
	char *dst;
	char src[]="India";
	dst=mysrc_rev(src);
	printf("%s\n",dst);
}
char*mysrc_rev(char*src)
{
	char temp;
	int i,l;
	if(src==NULL)
	return NULL;
	l=strlen(src);
	for(i=0,l=l-1;i<l;i++,l--)
	{
		temp=src[i];
		src[i]=src[l];
		src[l]=temp;
	}
	return src;
}
