/*
//arranging the alphabets in ascending order
#include<stdio.h>
#include<string.h>
void main()
{
	char arr[100];
	int i,j,len,temp;
	printf("Enter the string\n");
	scanf("%s",arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	printf("%s\n",arr);
}
*/
//arranging the alphabets in descending order
#include<stdio.h>
#include<string.h>
void main()
{
	char arr[100];
	int i,j,len,temp;
	printf("Enter the string\n");
	scanf("%s",arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i]<arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	printf("%s\n",arr);
}		
