/*
//using predefined functions strcpy
#include<stdio.h>
main()
{
	char dst[10];
	strcpy(dst,"hari");
	printf("%s\n",dst);
}
*/
//implement your own string copy function
char*mystrcpy(char*,char*);
main()
{
	char src[100]="zuberoddin";
	char dst[100];
	mystrcpy(dst,src);	
	printf("%s\n",dst);
}

char*mystrcpy(char*dst,char*src)
{
	int i;
	for(i=0;((src[i]!='\0')||(dst[i]!='\0'));i++)
	{
		dst[i]=src[i];
	}	
		dst[i]='\0';
		return dst;

}

