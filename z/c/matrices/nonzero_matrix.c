#include<stdio.h>
void read(int(*ptr)[4],int m,int r);
void display(int(*ptr)[4],int m,int r);
void nonzero(int(*ptr)[4],int m,int r);
int main(void)
{
	int m1[3][4];
	printf("enter elements to matrix:\n");
	read(m1,3,4);
	display(m1,3,4);
	nonzero(m1,3,4);
}


void read(int(*ptr)[4],int m,int r)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&ptr[i][j]);
		}
	}
}

void display(int(*ptr)[4],int m,int r)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",ptr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void nonzero(int(*ptr)[4],int m,int r)
{
	int i,j;
	printf("R C DATA\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			if(ptr[i][j]!=0)
			{
				printf("%d %d %d\n",i,j,ptr[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
}
