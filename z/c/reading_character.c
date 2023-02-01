#include<stdio.h>
main()
{
	char x;//Declaration of a variable (or) un initialized local variable
	printf("Enter a character:\n");//Before using Scanf f'n use one printf statement to display what type of i/p to be entered 
	scanf("%c",&x);//program execution is suspended until we provide the input 
	printf("%d-%c\n",x,x);//if we give b as a input it will print 98-b
}

