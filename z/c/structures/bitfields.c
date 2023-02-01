#include<stdio.h>
struct dob
{
	unsigned int date:5;
	unsigned int mnt:4;
	unsigned short int year;
};
main()
{
	struct dob d={04,06,2001};
	printf("%d %d %d %d\n",sizeof(d),d.date,d.mnt,d.year);
}
