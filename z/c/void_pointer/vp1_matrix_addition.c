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
	void *vptr1;
	void *vptr2;
	void *vptr3;
	vptr1 = m1;
	vptr2 = m2;
	vptr3 = m3;
	reading_m1_matrix(vptr1,ROW,COL);
	reading_m2_matrix(vptr2,ROW,COL);
	matrix_addition(vptr1,vptr2,vptr3,ROW,COL);
	
}
void reading_m1_matrix(int (*vptr1)[COL],int r, int e)
{
	int i,j;
	printf("Enter the elements of matrix m1 rowsxcolumns are:%dx%d\n",ROW,COL);
	__fpurge(stdin);
	for(i=0;i<r;i++)
	
	{
		for(j=0;j<e;j++)
		{	
			scanf("%d",&(((int(*)[e])vptr1)[i][j]));
		}
	}
}
void reading_m2_matrix(int (*vptr2)[COL],int r, int e)
{
	int i,j;
	printf("Enter the elements of matrix m2 rowsxcolumns are:%dx%d\n",ROW,COL);
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{	
			scanf("%d",&(((int(*)[e])vptr2)[i][j]));
		}
	}
}
void matrix_addition(int (*vptr1)[COL],int (*vptr2)[COL],int (*vptr3)[COL],int r,int e)
{
	//int m3[r][e]
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{	
			vptr3[i][j] = vptr1[i][j]+vptr2[i][j];
		}
	}
	 printf("After performing addition the resultant matrix m3 is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			printf("%d\t",vptr3[i][j]);
		}
		printf("\n");
	}	
}

