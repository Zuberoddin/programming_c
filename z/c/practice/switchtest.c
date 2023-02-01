#include<stdio.h>
main()
{
	int i;
	//printf("Select the option\n");
	//scanf("%d",&opt);
	for(i=0;i<3;i++)
	{
		switch(i)
		{
			case 1: printf("%d",i);
			case 2: printf("%d",i);
			default:printf("%d",i);
		}
	}
}
