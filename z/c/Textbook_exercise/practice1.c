#include<stdio.h>
#include<string.h>
main()
{
	char str[100]="samreen";
	char temp;
	int i,j,len;
	len=strlen(str);
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
		 	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//if(((str[i]>=65)&&(str[i]<=90))||((str[i]>=65)&&(str[i]<=90)))
		//{
			
