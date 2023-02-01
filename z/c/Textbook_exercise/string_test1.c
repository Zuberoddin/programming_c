/*program to convertthe string into abbreviate*/

#include<stdio.h>
#define MS 100
void main()
{
	int i,count=0;
	char arr[MS];
	printf("Enter a string: ");
	scanf("%[^\n]s",arr);
	printf("Abbrevation: \n");
	printf("---------------\n");
	for(i=0;arr[i]!='\0';i++)
	{
		if(((arr[i]>=65)&&(arr[i]<=90))&&(i==0))
		{
			printf("%c",arr[i]);
			count++;
		}
		else if((arr[i]==' ')&&(arr[i+1]>=65)&&(arr[i+1]<=90))
		{
			printf("%c",arr[i+1]);
			count++;
		}
	}
	if(count==0)
		printf("Not found");
	printf("\n");
}
