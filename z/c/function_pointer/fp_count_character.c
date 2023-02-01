char *count(char*);
#include<stdio.h>
int i,j,c;
main()
{
	char dst[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",dst);
	int (*fptr)(dst);
	fptr=count;
	fptr(dst);
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
