#include<stdio.h>
void zeros(int arr[],int n);
main()
{
int i;
int arr[]={2,5,7,0,4,0,7,5,8,0};
int n=10;
zeros(arr,n);
for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
void zeros(int arr[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
 				arr[j++]=arr[i];
		}
	}
	for(i=j;i<n;i++)
	{
		arr[i]=0;
	}
	
}
