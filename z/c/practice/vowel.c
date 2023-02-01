
//Write a program to given alphabet is vowel or not

main()
{
	char x;
	printf("Enter a character:\n");
	scanf("%c",&x);
	((x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'))?printf("The entered character is a vowel"):(((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))?printf("The entered character is a vowel"):printf("The entered character is not a vowel"));
}
