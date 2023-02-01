#include<stdio.h>
struct employee
{
char name[32];
unsigned id_no;
char role[32];
char gen;
char grade;
float salary;
}
main()
{
	struct employee e={"Zuberoddin",450,"Embedded Software Engineer",'M','A',15000};
	printf("%d\n",sizeof(e));
	printf("%p-%s\n%p-%d\n%p-%s\n%p-%c\n%p-%c\n%p-%f\n",e.name,e.name,&e.id_no,e.id_no,e.role,e.role,&e.gen,e.gen,&e.grade,e.grade,&e.salary,e.salary);
}
	
