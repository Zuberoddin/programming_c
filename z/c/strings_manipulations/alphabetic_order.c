#include<stdio.h>
main()
{
	char str[]="Devanshi";
	int len=strlen(str);
	int i,j,temp;
	if(i
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("%s\n",str);
}
