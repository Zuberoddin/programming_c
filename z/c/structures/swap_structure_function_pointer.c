#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
char name[32];
int nop;
float price;
};

struct book_ops
{
struct book*(*f_memory_alloc)();
void(*f_read)(struct book*);
void(*f_swap)(struct book*,struct book*);
void(*f_display)(struct book*);
void(*f_memory_dealloc)(struct book*);
};

struct book* memory_alloc();
void read(struct book*ptr);
void swap(struct book *b1,struct book*b2);
void display(struct book *ptr);
void memory_dealloc(struct book*ptr);

main()
{
	int opt;
	struct book*b1=NULL,*b2=NULL;
	struct book_ops op;
	while(1)
	{
		printf("Select the option\n 0.exit(0)\n 1.memory_alloc\n 2.read\n 3.swap\n 4.display\n 5.dealloc\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1:
				op.f_memory_alloc=memory_alloc;
				b1=op.f_memory_alloc();
				//op.f_memory_alloc=memory_alloc;
				b2=op.f_memory_alloc();
				if((b1==NULL)||(b2==NULL))
				exit(1);
				//printf("%p-%d\n",ptr,sizeof(ptr));
				break;
			case 2:
				op.f_read=read;
				op.f_read(b1);
				op.f_read=read;
				op.f_read(b2);
				break;
			case 3:
				op.f_swap=swap;
				op.f_swap(b1,b2);
				break;
			case 4:
				if((b1==NULL)||(b2==NULL))
				{
					printf("failed to display\n");
					printf("Memory is deallocated choose the option 1 for memory allocation\n");
				}
				else{
				op.f_display=display;
				op.f_display(b1);
				op.f_display=display;
				op.f_display(b2);
				}

				break;
			case 5:
				op.f_memory_dealloc=memory_dealloc;
				op.f_memory_dealloc(b1);
				b1=NULL;
				
				op.f_memory_dealloc=memory_dealloc;
				op.f_memory_dealloc(b2);
				b2=NULL;
			
				break;
		}
	}
}

struct book*memory_alloc()
{
	struct book*ptr=(struct book*)malloc(2*sizeof(struct book));
	return ptr;
}

void read(struct book*ptr)
{
	printf("enter book name\n");
	scanf("%s",ptr->name);
	__fpurge(stdin);
	printf("enter the nop\n");
	scanf("%d",&ptr->nop);
	__fpurge(stdin);
	printf("enter price\n");
	scanf("%f",&ptr->price);
	__fpurge(stdin);
}

void swap(struct book *b1,struct book*b2)
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
void memory_dealloc(struct book*ptr)
{
	free(ptr);
}


