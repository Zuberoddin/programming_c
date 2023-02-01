/*String search and replace*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MS 1000

void replace(char* org,char* srch,char* repl)
{
	int l,l1,l2;
	char* ptr;
	int i,j,c=0,k,a;
	l=strlen(org);
	ptr=(char*)calloc(l,sizeof(char));
	if(ptr==NULL)
	{
		printf("failed to allocate memory");
		return;
	}
	for(i=0;i<=l;i++)
		ptr[i]=org[i];
	l1=strlen(srch);
	l2=strlen(repl);

	for(i=0;ptr[i]!='\0';i++)
	{
		{ 
			a=0;
			for(j=i,k=0;((ptr[j]!='\0')||(ptr[j]!=' '));k++,j++)
			{       
				if(srch[k]=='\0')
					break;
				if(ptr[j]==srch[k])
					a++;
			}
			if(a==k)
			{       
				if(l1==l2)
				{
					for(j=i,k=0;repl[k]!='\0';k++,j++)
						ptr[j]=repl[k];
				}
				else
				{
					if(l1<l2)
					{
						ptr=(char*)realloc(ptr,(l+l2-l1)*sizeof(char));
						if(ptr==NULL)
						{
							printf("failed to reallocate memory");
							return;
						}
						for(j=(l+l2-l1);j>i;j--)
							ptr[j]=ptr[j-(l2-l2)];

						for(j=i,k=0;repl[k]!='\0';k++,j++)
							ptr[j]=repl[k];}

					else
					{
						for(j=i;j<=(l-(l1-l2));j++)
							ptr[j]=ptr[j+(l1-l2)];

						for(j=i,k=0;repl[k]!='\0';k++,j++)
							ptr[j]=repl[k];
					}
				}
				ptr=(char*)realloc(ptr,(l-(l1-l2))*sizeof(char));
				if(ptr==NULL)
				{
					printf("failed to reallocate memory");
					return;
				}
			}
		}
	}
	printf("%s\n",ptr);
}
void main()
{
	char arr[MS];
	char arr1[MS];
	char arr2[MS];
	printf("Replace the string\n");
	printf("-------------------\n");
	printf("enter a string: ");
	scanf("%[^\n]s",arr);
	printf("enter a search string: ");
	scanf("%s",arr1);
	printf("enter a replace string: ");
	scanf("%s",arr2);
	replace(arr,arr1,arr2);
}

