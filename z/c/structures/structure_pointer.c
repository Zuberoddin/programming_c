#include<stdio.h>
struct student
{
char name[32];
unsigned int id_no;
char gen;
char grade;
};
void main()
{
	struct student s={"aman",5,'M','A'};
	struct student *ptr;
	ptr=&s;
	printf("%p-%s\n",ptr->name,ptr->name);
	printf("%p-%d\n",&ptr->id_no,ptr->id_no);
	printf("%p-%c\n",&ptr->gen,ptr->gen);
	printf("%p-%c\n",&ptr->grade,ptr->grade);
}
	
