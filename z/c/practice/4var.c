#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	//int d;
	printf("Enter the numbers:\n");
	scanf("%d:%d:%d",a,b,c);
	(a>b)?printf("a is greater"):("b is greater");
	(a>c)?printf("a is greater"):("c is greater");
	//(a>d)?printf("a is greater"):("d is greater");
	(b>c)?printf("b is greater"):("c is greater");
	//(b>d)?printf("b is greater"):("d is greater");
	//(c>d)?printf("c is greater"):("d is greater");
}

