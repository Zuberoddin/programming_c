#include<stdio.h>
#define R 4
#define C 4
#define ROW 2
#define COL 3
main()
{
	int arr[R][C];
	int dst[ROW][COL];
	int i,j,k,l;
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
	//printf("R C DATA\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(arr[i][j]!=0)
			{ 
				printf("%d\t",arr[i][j]);
				dst[k][l]=arr[i][j];
			}
				for(k;k<ROW;k++)
				{
					for(l;l<COL;l++)
					{
						printf("%d",arr[k][l]);
					}
					printf("\n");
				}
		}
	}
}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
