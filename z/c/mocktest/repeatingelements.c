#include<stdio.h>
main()
{
int arr[7]={2,7,4,7,8,3,4};
int i,j,num;
//printf("enter the repeating element\n");
//scanf("%d",&num);
for(i=0;i<7;i++)
{
	for(j=i+1;j<7;j++)
	{
		if(arr[i]==arr[j])
		{
			arr[j]=arr[j--];
		}
	}
}
printf("%d\n",arr[i]);
}
