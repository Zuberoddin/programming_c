#include<stdio.h>
struct book
{
char name[32];
int nop;
float price;
};
void swap(struct book *b1,struct book *b2);
void display(struct book *ptr);
main()
{
	struct book b1={"C",550,360};
	struct book b2={"DS",600,1000};
	swap(&b1,&b2);
	display(&b1);
	display(&b2);
}
void swap(struct book *b1,struct book *b2)
{
	struct book temp;
	strcpy(temp.name,b1->name);
	strcpy(b1->name,b2->name);
	strcpy(b2->name,temp.name);
	temp.nop=b1->nop;
	b1->nop=b2->nop;
	b2->nop=temp.nop;
	temp.price=b1->price;
	b1->price=b2->price;
	b2->price=temp.price;
}
void display(struct book *ptr)
{
	printf("%p-%s\n",ptr->name,ptr->name);
	printf("%p-%d\n",&ptr->nop,ptr->nop);
	printf("%p-%f\n",&ptr->price,ptr->price);
}
