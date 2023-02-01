/*
//count of character in a given string
#include<stdio.h>
main()
{
	int i,j,c;
	char dst[10]="liril";
	for(i=0;dst[i]!='\0';i++)
	{
		if(dst[i]==' ')
			continue;
		c=1;
		for(j=i+1;dst[j]!='\0';j++)
		{
			if(dst[i]==dst[j])
			{
				c++;
			        dst[j]=' ';
			}
		}
	printf("%c-%d\n",dst[i],c);
	}
}


*/
//using functions  implement count of character in a given string
char *count(char*);
#include<stdio.h>
int i,j,c;
main()
{
	char dst[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",dst);
 	count(dst);
}

char *count(char*dst)
{
	for(i=0;dst[i]!='\0';i++)
	{
		if(dst[i]==' ')
			continue;
		c=1;
		for(j=i+1;dst[j]!='\0';j++)
		{
			if(dst[i]==dst[j])
			{
				c++;
			        dst[j]=' ';
			}
		}
	printf("%c-%d\n",dst[i],c);
	}
}
