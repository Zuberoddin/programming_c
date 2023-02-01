#include<stdio.h>
#define SIZE 100

int str_vowel(char *ptr,int i,int c)
{
	int res,con=0;
	//printf("i\t%c\n",ptr[i]);
	while(ptr[i]!='\0')
	{
	if((ptr[i]=='A')||(ptr[i]=='a')||(ptr[i]=='E')||(ptr[i]=='e')||(ptr[i]=='I')||(ptr[i]=='i')||(ptr[i]=='O')||(ptr[i]=='o')||(ptr[i]=='U')||(ptr[i]=='u'))
	{
		c++;
		//printf("%d\n",c);
	}
	res=con+str_vowel(ptr,i++,c);
	}
	return res;
}



void main()
{
	int count=0,i=0;
	char str[SIZE];
	printf("Enter a string:");
	scanf("%s",str);
	count=str_vowel(str,i,count);
	printf("%d\n",count);
}


