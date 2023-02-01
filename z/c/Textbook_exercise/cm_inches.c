#include<stdio.h>
void cm_to_inches(double c);
void inches_to_cm(double i);
main()
{
	int opt;
	double n;
	while(1)
	{
		printf("Menu\n 0.exit(0)\n 1.cm_to_inches\n 2.inches_to_cm\n");
		printf("select the option\n");
		scanf("%d",&opt);
		switch(opt)
		{
		case 0:
			exit(0);
		case 1:
			printf("Enter the number:\n");
			scanf("%lf",&n);
			cm_to_inches(n);
			break;
		case 2:
			printf("Enter the number:\n");
			scanf("%lf",&n);
			inches_to_cm(n);
			break;
		default:printf("Enter the valid input\n");
		}
	}
}
void cm_to_inches(double c)
{
	double sum=1;		
	sum=c*0.393701;
	printf("%lf\n",sum);
}
void inches_to_cm(double i)
{
	double sum=1;		
	sum=i*2.54;
	printf("%lf\n",sum);
}
