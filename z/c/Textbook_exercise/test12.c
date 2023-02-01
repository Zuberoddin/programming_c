/*Program to convert cm to inch and viceverse by sending first argument as length and second 
 * argument character which denotes the measuring unit */ 

#include<stdio_ext.h>
#include<stdlib.h>
double cm_inch(double value,char opt)
{
	double inch=2.54,cm=0.3937,rinch,rcm;
	switch(opt)
	{
		case 'c':
			rinch=cm*value;
			return rinch;
		case 'i':
			rcm=inch*value;
			return rcm;
	}
}

void main()
{
	char opt;
	double value,res;
	printf("Enter the value: ");
	scanf("%lf",&value);
	__fpurge(stdin);
	printf("'c'=In centimeters\n'i'=In inches\n");
	printf("Enter the opt: ");
	scanf("%c",&opt);
	res=cm_inch(value,opt);
	if(opt=='c')
		printf("%lfinch\n",res);
	else
		printf("%lfcm\n",res);
}
