#include<stdio.h>
//#include<string.h>
void mystrlen(char*);
main()
{

char src[100];
void *vptr;
printf("Enter the string:\n");
scanf("%s",src);
vptr=mystrlen;
((void(*)(char*))vptr)(src);
}



void mystrlen(char*ptr)
{
int i;
if(ptr==NULL)
return 0;
printf("%s is recieved\n",ptr);
for(i=0;ptr[i]!='\0';i++);
printf("%d\n",i);
}