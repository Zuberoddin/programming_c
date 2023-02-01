#include<stdio.h>

void mystr(char* ptr);

void main()
{
	char str[]="india is my country";
	mystr(str);
}
void mystr(char* ptr)
{
	int i,count=0,dst;
	for(i=0;ptr[i]!='\0';i++)
	{
		if(ptr[i]=='i')
		{
			count++;
			dst=ptr[i];
		}
	}
	printf("%c\n",dst);
	printf("%d\n",count);
}
