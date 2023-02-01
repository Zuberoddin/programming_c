#include<stdio.h>
#include<string.h>
main()
{
	int i,j=0,len;
	char src[20];
	char d;
	printf("enter the string:\n");
	scanf("%s",src);
	printf("enter the desired string what you want to remove:\n");
	__fpurge(stdin);
	scanf("%c",&d);
	len=strlen(src);
	for(i=0;i<len;i++)
	{
		if(src[i]==d)
		{
			for(j=i;j<len;j++)
			{
				src[j]=j+1;
			}
			len--;
			i--;
		}
	}
	printf("%s\n",src);
}
