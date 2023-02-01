#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
char name[32];
int nop;
float price;
};
struct book* memory_alloc();
void read(struct book *ptr);
void swap(struct book *b1,struct book *b2);
void display(struct book *ptr);
void memory_dealloc(struct book *ptr);
main()
{
	struct book *b1,*b2;
	b1=memory_alloc();
	b2=memory_alloc();
	read(b1);
	read(b2);
	swap(b1,b2);
	display(b1);
	display(b2);
	memory_dealloc(b1);
	memory_dealloc(b2);
}
struct book* memory_alloc()
{
struct book*ptr=(struct book*)malloc(1*sizeof(struct book));
return ptr;
}
void read(struct book *ptr)
{
printf("Enter the book name\n");
scanf("%s",ptr->name);
__fpurge(stdin);
printf("Enter the nop\n");
scanf("%d",&ptr->nop);
__fpurge(stdin);
printf("Enter the price\n");
scanf("%f",&ptr->price);
__fpurge(stdin);
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
void memory_dealloc(struct book *ptr)
{
	free(ptr);
}

