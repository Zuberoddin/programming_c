#define ROW 3
#define COL 4
#include<stdio.h>
int main(void)
{
	int m1[ROW][COL],m2[ROW][COL],m3[ROW][COL],i,j;
	printf("Enter the elements of matrix m1 rowsxcolumns are:%dx%d\n",ROW,COL);
	__fpurge(stdin);
	for(i=0;i<ROW;i++)
	
	{
		for(j=0;j<COL;j++)
		{	
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter the elements of matrix m2 rowsxcolumns are:%dx%d\n",ROW,COL);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{	
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{	
			m3[i][j] = m1[i][j]+m2[i][j];
		}
	}
	printf("After performing addition the resultant matrix m3 is\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}	
}
