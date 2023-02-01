//performing the matrix_multiplication using functions
#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2 
void reading_m1_matrix(int (*)[COL1],int , int );
void reading_m2_matrix(int (*)[COL2],int , int );
void matrix_multiplication(int (*)[COL1],int (*)[COL2],int (*)[COL2],int,int,int );
int main(void)
{
	int m1[ROW1][COL1],m2[ROW2][COL2],m3[ROW1][COL2],i,j;
	reading_m1_matrix(m1,ROW1,COL1);
	reading_m2_matrix(m2,ROW2,COL2);
	matrix_multiplication(m1,m2,m3,ROW1,COL1,COL2);
	
}
void reading_m1_matrix(int (*m1)[COL1],int r1, int e1)
{
	int i,j;
	printf("Enter the elements of matrix m1 rowsxcolumns are:%dx%d\n",ROW1,COL1);
	__fpurge(stdin);
	for(i=0;i<r1;i++)
	
	{
		for(j=0;j<e1;j++)
		{	
			scanf("%d",&m1[i][j]);
		}
	}
}
void reading_m2_matrix(int (*m2)[COL2],int r2, int e2)
{
	int i,j;
	printf("Enter the elements of matrix m2 rowsxcolumns are:%dx%d\n",ROW2,COL2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<e2;j++)
		{	
			scanf("%d",&m2[i][j]);
		}
	}
}
void matrix_multiplication(int (*m1)[COL1],int (*m2)[COL2],int (*m3)[COL2],int r1,int e1,int e2)
{
	//int m3[r][e]
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<e2;j++)
		{	
			m3[i][j] = 0;
			for(k=0;k<e1;k++)
			 m3[i][j] += m1[i][k] * m2[k][j];
		}
	}
	 printf("After performing substration the resultant matrix m3 is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<e2;j++)
		{
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}	
}

