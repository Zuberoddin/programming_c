#include<stdio.h>
char* strr(char*);
void main()
{
	char str[]="India";
	strr(str);
}
char* strr(char *ptr)
{
	int i;
	for(i=0;ptr[i]!='\0';i++)
	{	
		printf("%c\t-%p\n",ptr[i],&ptr[i]);
	}
}
