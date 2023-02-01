#include<stdio.h>
struct student
{
char name[20];
int rollno;
int submarks[4];
}
main()
{
	struct student stuarr[3];
	for(i=0;i<3;i++)
	{
		printf("Enter the data for student %d\n",i+1);
		

