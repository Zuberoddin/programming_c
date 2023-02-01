#include<stdio.h>
main()
{
	int ret;//un initialized local variable
	ret=printf("welcome");//gives the count of welcome as a returns 
	printf("return value is %d \n",ret);// prints the returs value
	ret=printf(" Hi \t \v Hello \r Hyderabad\n");//gives the count of in b/w these "  " 
	printf("output \b %d\n",ret);// print the returns value
}
