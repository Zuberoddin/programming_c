/*
#include<stdio.h>
main()
{
		int i,tsum=0,sum=0,T=500;
		float tperc;
		int marks[5]={80,90,79,87,96};
		for(i=0;i<5;i++)
		{
			tsum=sum+marks[i];
			if(i!=4)
			{
				sum=tsum;
			}
		}
		printf("Total aquired subjects marks are-%d\n",tsum);
		tperc=(tsum*100)/T;
		printf("The percentage of aquired marks are-%f\n",tperc);
}
*/

#include<stdio.h>
main()
{
		int i,j,tsum=0,sum=0,T=500;
		float tperc;
		int marks[5];
		printf("Enter the 5subjects marks are\n");
		for(j=0;j<5;j++)
		{
			scanf("%d",&marks[j]);
		}
		for(i=0;i<5;i++)
		{
			tsum=sum+marks[i];
			if(i!=4)
			{
				sum=tsum;
			}
		}
		printf("Total aquired subjects marks are-%d\n",tsum);
		tperc=(tsum*100)/T;
		printf("The percentage of aquired marks are-%f\n",tperc);
}	
