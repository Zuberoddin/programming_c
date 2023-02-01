/*To print sub string*/

#include<stdio_ext.h>
#include<string.h>
#define MS 100

void main()
{
	int i,j;
	char chara,chara1,c;
	char arr[MS];
	printf("Enter a string: ");
	scanf("%[^\n]s",arr);
	__fpurge(stdin);
	printf("From which character: ");
	scanf("%c",&chara);
	__fpurge(stdin);
	printf("From which character: ");
	scanf("%c",&chara1);
	printf("Sub string\n");
	printf("------------\n");
	for(i=0;arr[i]!='\0';i++)
	{
		c=1;
		if(arr[i]==chara)
		{
			for(j=i+1;arr[j]!=chara1;j++)
			{
				c++;
				if(arr[j]=='\0')
				{	c=0;
					break;
				}
			}
			for(j=i;j<=i+c;j++)
				printf("%c",arr[j]);
			i=j-1;
			printf("\n");
		}
	}
}

