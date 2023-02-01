#include<stdio.h>
#include<string.h>
void delete_char(char *s,char d);
int main()
{
	char s[100];
	char d;
	printf("enter a string:");
	scanf("%s",s);
	__fpurge(stdin);
	printf("enter charcter to be deleted from the given string:");
	scanf("%c",&d);
	void*ptr;
	ptr=delete_char;
	((void(*)(char*,char*))ptr)(s,d);
	//void(*fptr)(char*,char*);
	//fptr=delete_char;
	//fptr(s,d);
	//delete_char(s,d);
}

void delete_char(char *s,char d)
{
	int i,j;
	for(i=0;s[i]!='\0'; )
	{
			if(s[i]==d)
			{
			
				j=i;
				while(s[j]!='\0')
				{
				s[j]=s[j+1];
				j++;
				}
			}
			else
			i++;

	}
	printf("%s\n",s);
}
