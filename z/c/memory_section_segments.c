//program for understanding memory sections and memory segments

int addition(int,int); //function declaration

//function invocation/calling
main()
{
int a=10,b=20,res=0;
printf("main:%p:a-%p-%d\n",main,&a,a);
printf("main:%p:b-%p-%d\n",main,&b,b);
printf("main:%p:res-%p-%d\n",main,&res,res);
printf("main:calling addition\n");
res=addition(a,b);
printf("main:%p:res-%p-%d\n",main,&res,res);
}

//function defination
int addition(int a,int b)
{
printf("addition:%p:a-%p-%d\n",addition,&a,a);
printf("addition:%p:b-%p-%d\n",addition,&b,b);
return(a+b);
}
