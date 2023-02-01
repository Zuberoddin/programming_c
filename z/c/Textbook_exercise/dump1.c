#include<stdio.h>
#define R 3
#define C 3

void main()
{
	int i,j,k,sum=0,temp;
	int ptr[R][C];
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
			scanf("%d",&ptr[i][j]);
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
			printf("%d\t",ptr[i][j]);
	printf("\n");
	}
	printf("\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			sum=0;
			for(k=1;k<ptr[i][j];k++)
			{
				if(ptr[i][j]%k==0)
					sum=sum+k;
			}
			if(ptr[i][j]==sum)
				printf("%d\n",sum);
		}
	}
}


