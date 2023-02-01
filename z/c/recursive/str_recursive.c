#include<stdio.h>
int*mystr_rev(char*src);
main()
{
	char str[]="India";
	mystr_rev(str);
}
int*mystr_rev(char*src)
{
	char temp;
	int i,l;
	if(src==NULL)
	return 1;
	if(*src)
	mystr_rev(src+1);
	printf("%c\n",*src);
}
	
