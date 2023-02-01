#include<stdio.h>
#define R 4
#define C 4
main()
{
	int m1[R][C],i,j;
	printf("Enter the elements\n");
	for(i=0;i<R;i++)
	{
	printf("\n");
		for(j=0;j<C;j++)
		{
			scanf("%d",&m1[i][j]);
		//	__fpurge(stdin);
		}
	}
	for(i=0;i<R;i++)
	{	for(j=0;j<C;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		 printf("\n");
	}
	printf("\n");
	//loop 1
	for(i=0;i<=0;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",m1[i][j]);
		}
	}
	//loop 2
	j--;
	//printf("i==%d j==%d\n",i,j);
		for(i;i<R;i++)
		{
			printf("%d ",m1[i][j]);
		}
		i--;  //3
		j--;//2
		//loop 3
		for(j ;j>=0;j--)
		{
			printf("%d ",m1[i][j]);
		}
		j++;//0
		i--;//2
	//loop 4
		for(i;i>=1;i--)
		{
			printf("%d ",m1[i][j]);
		}
		i++;//1
		j++;//1
		//loop 5
		for(j;j<=2;j++)
		{
			printf("%d ",m1[i][j]);
		}
		i++;//2
		j--;//2
		//loop 6
		for(j;j>=1;j--)
		{
			printf("%d ",m1[i][j]);
		}
}	

			
		
		
		
		
		
		
	
