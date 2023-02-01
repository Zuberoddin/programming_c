#include<stdio.h>
void main()
{
	const char x=10;
	printf("%d\n",x);
	char x=20;//Compilation error--->you can't modify the x data because it is first declared/initialized with const keyword	
	printf("%d\n",x);
}
