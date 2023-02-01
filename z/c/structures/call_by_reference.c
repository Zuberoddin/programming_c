#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book
{
char name[32];
int nop;
float salary;
};
void display(struct book *);
main()
{
	struct book b={"c in depth",600,1000};
	display(&b);
}
void display(struct book *ptr)
{
	printf("%s\n",ptr->name);
	printf("%d\n",ptr->nop);
	printf("%f\n",ptr->salary);
}
	
