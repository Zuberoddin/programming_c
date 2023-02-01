#include<stdio.h>
#define R 4
#define C 4
main()
{
	int i,j;
	int arr[R][C];
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
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("R C DATA\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
				if(arr[i][j]!=0)
					printf("%d %d %d\n",i,j,arr[i][j]);
		}
		printf("\n");
	}
}
