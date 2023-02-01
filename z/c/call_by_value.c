//program for call by value or pass by value

void swap(int,int); //function declaration

//function calling
main()
{
int a=10,b=20;
printf("main:a:%p-%d\n",&a,a);
printf("main:b:%p-%d\n",&b,b);
swap(a,b);
printf("main:a:%p-%d\n",&a,a);
printf("main:b:%p-%d/n",&b,b);
}

//function defination
void swap(int a,int b)
{
int temp;
printf("swap:a:%p-%d\n",&a,a);
printf("swap:b:%p-%d\n",&b,b);
temp=a;
a=b;
b=temp;
printf("swap:a:%p-%d\n",&a,a);
printf("swap:b:%p-%d\n",&b,b);
}
