#include<stdio.h>
struct dob
{
unsigned int date:5;
unsigned int mnt:4;
unsigned short int year;
};
main()
{
struct dob dt;
dt.date=29;
dt.mnt=9;
dt.year=2001;
struct dob *ptr=&dt;
printf("%p\n",&dt);
printf("%p\n",ptr);
printf("%d %d %d\n",ptr->date,ptr->mnt,ptr->year);
}
