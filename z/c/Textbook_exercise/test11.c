/*Program to convert the cm to inch and viceversa*/

#include<stdio_ext.h>
#include<stdlib.h>

double centimeter(double value)
{
	double cm,inch=2.54;
	cm=inch*value;
	return cm;
}

double inches(double value)
{
	double inch,cm=0.3937;
	inch=cm*value;
	return inch;
}

void main()
{
	int opt;
	double res,value;
	printf("Enter the value: ");
	scanf("%lf",&value);
	__fpurge(stdin);
	while(1)
	{
		printf("Main Menu\n1.In Centimeters\n2.In Inches\n0.Exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
				exit(0);
			case 1:
				res=centimeter(value);
				printf("%lfcm\n",res);
				break;
			case 2:
				res=inches(value);
				printf("%lfinches\n",res);
				break;
		}
	}
}

