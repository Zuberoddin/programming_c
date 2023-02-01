/*
#include<stdio.h>
main()
{
	char x;
	printf("Enter the input:\n");
	scanf("%c",&x);
	if((x>0)&&(x<127))
	{
		printf("char dec oct hexa\n");
		printf("%c   %d  %o  %x\n",x,x,x,x);
	}
	else
	{
		printf("The entered character is not in range of ascii/n");
	}
}
*/

#include<stdio.h>
main()
{
	unsigned char x;
	printf("oct\t dec\t hexa\t char\n");
	for(x=0;x<128;x++)
	{
		printf("%o\t %d\t %x\t %c\n",x,x,x,x);
	}
}
