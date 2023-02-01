#include<stdio.h>
main()
{
	int x[5]={10,20,30,40,50};
	display(x,5);
}
void display(int x[5],int n)
//void display(int *x,int n)
{
	int i;
	printf("%d\n",sizeof(x));//8
	for(i=0;i<n;i++)
		printf("%d\n",x[i]);//10
				    //20
				    //30
				    //40
				    //50
}
