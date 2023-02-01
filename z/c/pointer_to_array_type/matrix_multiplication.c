#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
main()
{
	int m1[ROW1][COL1],m2[ROW2][COL2],m3[ROW1][COL2];
	int i,j,k;
	printf("Enter the elements of matrix-m1(3x4)\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter the elements of matrix-m2(4x2)\n");
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	//multiplication
	printf("Enter the elements of matrix-m2(4x2)\n");
	for(i=0;i<ROW1;i++)
		for(j=0;j<COL2;j++)
		{
			m3[i][j]=0;
			for(k=0;k<COL1;k++)
				m3[i][j] += m1[i][k] * m2[k][j];
		}
	printf("After performing multiplication matrix m3(3x2)is:\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
}

