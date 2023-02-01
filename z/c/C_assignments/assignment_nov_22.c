
#include<stdio.h>
#include<string.h>
main()
{
	char arr[]="embedded";
	int i,j,k;
	for(i=0;arr[i]!='\0';i++)
	{
		for(j=i+1;arr[j]!='\0';j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;arr[k]!='\0';k++)
				{
					arr[k]=arr[k+1];
				}
				k=1;
				j--;
			}
		}
		if(k)
		{
			for(k=i;arr[k]!='\0';k++)
			{
				arr[k]=arr[k+1];
			}
			k=0;
			i--;
		}
	}
	printf("%s\n",arr);
}

