#include<stdio.h>
#include<string.h>
//#pragma pack(1)
struct employee
{
char name[32];
int id;
float salary;
char grade;
char gen;
}__attribute__(packed);
main()
{
struct employee e[3];
printf("%p-%d-%d\n",e,sizeof(e),sizeof(struct employee));
read(e,3);
display(e,3);
}
void read(struct employee *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("enter employee name\n");
	scanf("%s",ptr[i].name);
	__fpurge(stdin);
	printf("enter id\n");
	scanf("%d",&ptr[i].id);
	__fpurge(stdin);
	printf("enter salary\n");
	scanf("%f",&ptr[i].salary);
	__fpurge(stdin);
	printf("enter grade\n");
	scanf("%c",&ptr[i].grade);
	__fpurge(stdin);
	printf("enter gen\n");
	scanf("%c",&ptr[i].gen);
	}
}

void display(struct employee *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("%s\n",ptr[i].name);
	printf("%d\n",ptr[i].id);
	printf("%f\n",ptr[i].salary);
	printf("%c\n",ptr[i].grade);
	printf("%c\n",ptr[i].gen);
	}
}
