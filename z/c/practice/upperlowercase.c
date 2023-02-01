

//Write a program to verify the given character is Uppercase or Lowercase

#include<stdio.h>
main()
{
	char ch;
	printf("enter a character :\n");
	scanf("%c",&ch);
	((ch>=65)&&(ch<=90))?printf("The given character is Upper case letter"):(((ch>=97)&&(ch<=122))?printf("The given character is a Lower case"):printf("The given character is other than alphabet"));
}

