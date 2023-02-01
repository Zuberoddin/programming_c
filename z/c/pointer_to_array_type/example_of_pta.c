#include<stdio.h>
main()
{
	int arr[8]={10,20,30,40,50,60,70,80};
	int (*ptr)[4],i,j;
	ptr=arr;
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%p-%d\n",&ptr[i][j],ptr[i][j]);
		}
	}
			printf("%p-%d\n",ptr[0],sizeof(ptr[0]));
			printf("%p-%d\n",ptr[1],sizeof(ptr[1]));
}
