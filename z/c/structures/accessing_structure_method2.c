#include<stdio.h>
#include<string.h>
struct student
{
char name[32];
unsigned int id_no;
char gen;
char grade;
};
void main()
{
struct student s1={"Abbu",1,'M','A'};
struct student s2={"sufiyan",2,'M','A'};
struct student temp;
printf("%d\n",sizeof(struct student));
//method-2
strcpy(temp.name,s1.name);
strcpy(s1.name,s2.name);
strcpy(s2.name,temp.name);
temp.id_no=s1.id_no;
s1.id_no=s2.id_no;
s2.id_no=temp.id_no;
temp.gen=s1.gen;
s1.gen=s2.gen;
s2.gen=temp.gen;
temp.grade=s1.grade;
s1.grade=s2.grade;
s2.grade=temp.grade;
printf("%p-%s\n",s1.name,s1.name);
printf("%p-%d\n",&s1.id_no,s1.id_no);
printf("%p-%c\n",&s1.gen,s1.gen);
printf("%p-%c\n",&s1.grade,s1.grade);

printf("%p-%s\n",s2.name,s2.name);
printf("%p-%d\n",&s2.id_no,s2.id_no);
printf("%p-%c\n",&s2.gen,s2.gen);
printf("%p-%c\n",&s2.grade,s2.grade);
}

