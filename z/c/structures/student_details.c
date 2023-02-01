#include<stdio.h>
struct student
{
char name[32];
unsigned int id_no;
char gen;
char grade;
}
main()
{
	struct student s={"zuberoddin",7,'M','A'};
	printf("%d\n",sizeof(s));
	printf("%d\n",sizeof(struct student));
	printf("%p\n",&s);
	printf("%p-%s\n-%p-%d\n-%p-%c\n-%p-%c\n",s.name,s.name,&s.id_no,s.id_no,&s.gen,s.gen,&s.grade,s.grade);
	s.name[0]='s';
	s.name[1]='h';
	s.name[2]='a';
	s.name[3]='h';
	s.name[4]='e';
	s.name[5]='z';
	s.name[6]='a';
	s.name[7]='d';
	s.name[8]='a';
	s.name[9]=' ';
	s.id_no=9;
	printf("%p-%s\n-%p-%d\n-%p-%c\n-%p-%c\n",s.name,s.name,&s.id_no,s.id_no,&s.gen,s.gen,&s.grade,s.grade);
}
	
	
