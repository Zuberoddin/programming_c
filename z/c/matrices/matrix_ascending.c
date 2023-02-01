#include<stdio.h>
#define ROW 4
#define COL 4
main()
{
	int m1[ROW][COL],i,j,r,s,temp;
	printf("Enter the inputs:\n");
		
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
		scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
		printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			for(s=0;s<ROW;s++)
			{
				for(r=0;r<COL;r++)
				{
					if(m1[i][j]>m1[s][r])
					{
						temp=m1[i][j];
						m1[i][j]=m1[s][r];
						m1[s][r]=temp;
					}
				}
			}
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
		printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}		
}
