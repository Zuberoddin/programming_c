//performing the matrix_addition using functions
#include<stdio.h>
#define ROW 3
#define COL 4
void reading_m1_matrix(int (*)[COL],int , int );
void reading_m2_matrix(int (*)[COL],int , int );
void matrix_addition(int (*)[COL],int (*)[COL],int (*)[COL],int ,int );
int main(void)
{
	int m1[ROW][COL],m2[ROW][COL],m3[ROW][COL],i,j;
	reading_m1_matrix(m1,ROW,COL);
	reading_m2_matrix(m2,ROW,COL);
	void*vptr;
	vptr=matrix_addition;
	//matrix_addition(m1,m2,m3,ROW,COL);
	((void(*)(int (*m1)[COL],int (*m2)[COL],int (*m3)[COL],int r,int e))vptr)(m1,m2,m3,ROW,COL);
}
void reading_m1_matrix(int (*m1)[COL],int r, int e)
{
	int i,j;
	printf("Enter the elements of matrix m1 rowsxcolumns are:%dx%d\n",ROW,COL);
	__fpurge(stdin);
	for(i=0;i<r;i++)
	
	{
		for(j=0;j<e;j++)
		{	
			scanf("%d",&m1[i][j]);
		}
	}
}
void reading_m2_matrix(int (*m2)[COL],int r, int e)
{
	int i,j;
	printf("Enter the elements of matrix m2 rowsxcolumns are:%dx%d\n",ROW,COL);
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{	
			scanf("%d",&m2[i][j]);
		}
	}
}
void matrix_addition(int (*m1)[COL],int (*m2)[COL],int (*m3)[COL],int r,int e)
{
	//int m3[r][e]
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{	
			m3[i][j] = m1[i][j]+m2[i][j];
		}
	}
	 printf("After performing addition the resultant matrix m3 is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}	
}

