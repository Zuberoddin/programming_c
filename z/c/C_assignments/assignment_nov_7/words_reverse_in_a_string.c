#include<stdio.h>
#include<string.h>
void reverseStr(char str[]);
void reverse(char str[],int start,int end);
int main(void)
{
	char str[50];
	strcpy(str,"India is my country");
	reverseStr(str);
	puts(str);
	return 0;
}
void reverseStr(char str[])
{
	int i,j;
	char tmp;
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
	}
}

