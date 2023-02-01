#include<stdio.h>
#define ROW 3
#define COL 4
void reading_m1_m2(int(*m1)[4],int(*m2)[3],int r,int e);
void transpose_matrix(int (*m2)[3],int r,int e);
int main(void)
{
	int m1[ROW][COL],m2[COL][ROW];
	reading_m1_m2(m1,m2,ROW,COL);
	transpose_matrix(m2,ROW,COL);
}
void reading_m1_m2(int(*m1)[4],int(*m2)[3],int r,int e)
{
	int i,j;
	printf("Enter the elements of m1(ROWxCOL)\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<e;i++)
	{
		for(j=0;j<r;j++)
		{
			m2[i][j]=m1[j][i];
		}
	}
}
void transpose_matrix(int (*m2)[3],int r,int e)
{
	int i,j;
	printf("The transpose of a matrix is\n");
	for(i=0;i<e;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
}
