/*Program to print the character in ascending order irrespective of upper and lower case*/

#include<stdio.h>
#define SIZE 10000

void main()
{
	char name[SIZE];
	char a,b,temp;
	int i,j;
	printf("Enter a string: ");
	scanf("%[^\n]s",name);
	printf("Printing characters in ascending order irrespective of upper case and lower case\n");
	printf("--------------------------------------------------------------------------------\n");
	for(i=0;name[i]!='\0';i++)
	{
		for(j=i+1;name[j]!='\0';j++)
		{
			if(name[j]<=90)
				a=name[j]+32;
			else
				a=name[j];
			if(name[i]<=90)
				b=name[i]+32;
			else
				b=name[i];
			if(a<b)
			{
				temp=name[i];
				name[i]=name[j];
				name[j]=temp;
			}
		}
	}
	printf("%s\n",name);
}

