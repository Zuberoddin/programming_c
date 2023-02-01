#include<stdio.h>
#include<stdlib.h>
struct dob
{
int date;
int mnt;
int year;
};

struct employee
{
char name[32];
int salary;
struct dob dt;
};

struct employee_ops
{
void(*f_read)(struct employee*);
void(*f_display)(struct employee*);
};

void read(struct employee*ptr);
void display(struct employee *ptr);

main()
{
struct employee*ptr=(struct employee*)malloc(1*sizeof(struct employee));
if(ptr==NULL)
exit(1);
struct employee_ops op;
op.f_read=read;
op.f_display=display;
op.f_read(ptr);
op.f_display(ptr);
free(ptr);
}
void read(struct employee*ptr)
{
printf("enter employee name\n");
scanf("%s",ptr->name);
__fpurge(stdin);
printf("enter salary\n");
scanf("%d",&ptr->salary);
__fpurge(stdin);
printf("enter date\mnt\year\n");
scanf("%2d%2d%4d",&ptr->dt.date,&ptr->dt.mnt,&ptr->dt.year);
}
void display(struct employee *ptr)
{
printf("%p-%s\n",ptr->name,ptr->name);
printf("%p-%d\n",&ptr->salary,ptr->salary);
printf("%p-%d-%d-%d\n",&ptr->dt,ptr->dt.date,ptr->dt.mnt,ptr->dt.year);
}
