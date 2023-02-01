#include<stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
	int m1[ROW][COL],m2[COL][ROW];
	int i,j;
	printf("Enter the elements of m1(ROWxCOL)\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<COL;i++)
	{
		for(j=0;j<ROW;j++)
		{
			m2[i][j]=m1[j][i];
		}
	}
	printf("The transpose of a matrix is\n");
	for(i=0;i<COL;i++)
	{
		for(j=0;j<ROW;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
}
