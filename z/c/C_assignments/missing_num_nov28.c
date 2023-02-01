#include<stdio.h>
main()
{
	int i,sum=0,nsum=0,msum=0;
	int arr[]={1,2,4,5,6,7,8,9,10};
	int narr[]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<9;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d\n",sum);
	for(i=0;i<10;i++)
	{
		nsum=nsum+narr[i];
	}
	printf("%d\n",nsum);
	msum=nsum-sum;
	printf("Missing Element is %d\n",msum);
}
