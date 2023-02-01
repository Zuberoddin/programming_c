#include<stdio.h>
#define R 3
#define C 3
void main()
{
	int arr[R][C],i,j,k,sum=0;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			sum=0;
			for(k=1;k<arr[i][j];k++)
			{
				if(arr[i][j]%k==0)
				sum = sum+k;
			}
			if(arr[i][j]==sum)
			printf("%d\n",sum);
		}
	}
}
		
			
