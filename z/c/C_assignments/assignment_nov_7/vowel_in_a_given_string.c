#include<stdio.h>
#include<string.h>
main()
{
	int i,c=0,n;
	char str[100];
	printf("Enter the string:\n");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		{
			c++;
			printf("%c\n",str[i]);
		}
	}
	        printf("%d\n",c);
}
