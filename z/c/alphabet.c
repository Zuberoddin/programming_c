/*
#include<stdio.h>

main()
{
	char x;
	printf("enter a alphabet:\n");
	scanf("%c",&x);
	if(((x>=65)&&(x<=90))||((x>=97)&&(x<=122)))
	{
		if((x>=65)&&(x<=90))
		{
			printf("The given character is Uppercase:\n");
		}
		else
		{
			printf("The given character is lowercase:\n");
		}
	}
	else
	{
	printf("The given character is not an Uppercase not a lowercase:\n");
	}
}	
*/

#include<stdio.h>
main()
{
	char x,y;
	printf("enter the alphabet");
	scanf("%c",&x);
	if (x>=97 && x<=122)
	{
		y=x-32;
		printf("%c\n",y);
	}
	else if (x>=65 && x<=90)
	{
		y=x+32;
		printf("%c\n",y);
	}
	else
	{
		printf("Entered input is invalid\n");
	}
}


