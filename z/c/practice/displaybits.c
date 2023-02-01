/*
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int a,b;
	printf("enter the values of a and b in hexadecimal: ");
	scanf("%x%x",&a,&b);
	printf("a=%x\n",a);    displayBits(a);
	printf("b=%x\n",b);    displayBits(b);
	printf("a&b=%x\n",a&b);    displayBits(a&b);
	printf("a|b=%x\n",a|b);    displayBits(a|b);
	printf("a^b=%x\n",a^b);    displayBits(a^b);
	printf("~a=%x\n",a);    displayBits(~a);
	printf("~b=%x\n",~b);    displayBits(~b);
}
*/

#include<stdio.h>
int main(void)
{
        int a,b;
        printf("enter the values of a and b in hexadecimal: ");
        scanf("%x%x",&a,&b);
        printf("a=%x\n",a);    
        printf("b=%x\n",b);    
        printf("a&b=%x\n",a&b);    
        printf("a|b=%x\n",a|b);    
        printf("a^b=%x\n",a^b);    
        printf("~a=%x\n",a);    
        printf("~b=%x\n",~b);   
}

