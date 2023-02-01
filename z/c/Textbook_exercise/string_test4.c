#include<stdio_ext.h>
#include<string.h>
#define SIZE 100
void main()
{
	char arr[100];
	char chara;
	int i,j,l,count=0;
	printf("string count from a chatacter\n");
	printf("Enter a string:");
	scanf("%s",arr);
	__fpurge(stdin);
	l=strlen(arr);
	l--;
	__fpurge(stdin);
	printf("Enter the character: ");
	scanf("%c",&chara);
	printf("Character count for the given chararcter\n");
	printf("------------------------------------------\n");
	for(i=0;i<=l;i++)
	{
		if((arr[i]==chara)||(count>0))
				count++;
	}
	printf("%d\n",count);
}

