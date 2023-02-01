#include<stdio.h>
struct book
{
char name[32];
int nop;
float price;
};
void display(struct book c);
main()
{
	struct book b={"C in depth",550,360};
	display(b);
}
void display(struct book c)
{
	printf("%p-%s\n",c.name,c.name);
	printf("%p-%d\n",&c.nop,c.nop);
	printf("%p-%f\n",&c.price,c.price);
}
