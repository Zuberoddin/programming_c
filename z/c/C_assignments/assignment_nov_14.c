#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* remove_spaces(char*ptr);
void rotate_elements(int *c,int n,int m);
int len;
main()
{
	int opt;
	while(1)
	{
	printf("Menu\n 0.exit\n 1.remove_spaces\n 2.rotate_elements\n");
	__fpurge(stdin);
	printf("Select the option\n");	
		
		scanf("%d",&opt);
		switch(opt)
		{
		case 0:exit(0);
		case 1: 
			char arr[100];
			char *dst;	
			printf("Enter the strings\n");
			__fpurge(stdin);
			scanf("%[^\n]s",arr);
			len=strlen(arr);
			dst=remove_spaces(arr);
			printf("%s\n",dst);
			break;
		case 2:
			int i,n,m;
			printf("Enter the number of values:\n");
			scanf("%d",&n);
			__fpurge(stdin);
			int c[n];
			for(i=0;i<n;i++)
			{
				printf("Enter value:\n");
				scanf("%d",&c[i]);
				__fpurge(stdin);
			}
			printf("Enter the number for how many times rotating\n");
			scanf("%d",&m);
			__fpurge(stdin);
			rotate_elements(c,n,m);
			printf("After rotating\n");
			for(i=0;i<n;i++)
			{
				printf("%d\n",c[i]);
			}
			break;
		}
	}
}
char* remove_spaces(char*ptr)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		if(ptr[0]==' ')
		{
			for(i=0;i<(len-1);i++)
			{
				ptr[i]=ptr[i+1];
			}
			ptr[i]='\0';
			len--;
			i=-1;
			continue;
		}
		if((ptr[i]==' ')&&(ptr[i+1]==' '))
		{
			for(j=i;j<(len-1);j++)
			{
				ptr[j]=ptr[j+1];
			}
			ptr[j]='\0';
			len--;
			i--;
			continue;
		}
	}
	return ptr;	
}
void rotate_elements(int *c,int n,int m)
{
	int temp,i,j;
	for(j=0;j<m;j++)
	{
		temp=c[0];
		for(i=0;i<n-1;i++)
		{
			c[i]=c[i+1];
		}
		c[i]=temp;

	}
}

