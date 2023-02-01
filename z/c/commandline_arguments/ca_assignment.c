#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int binary_value(int ptr);
int ascending_order(int *ptr,int n);
int descending_order(int *ptr,int n);
int polyndrome(char *ptr);
void help();
main(int argc,char*argv[])
{
	int i,sum=0,temp,k=0;
	int *ptr;
	char opt;
	if(argc>2)
	{
		printf("Entered inputs are sufficient for the next process:%d\n",argc);
		if(argv[1][0]=='-')
		{
			printf("\n");
		}
	}
	else
	{
		printf("Please enter the valid input\n");
		exit(2);
	}
	ptr=(int*)malloc((argc-2)*sizeof(int));
	for(i=2;i<argc;i++)
	{
		int j,s=1,sum=0;
			for(j=0;argv[i][j]!='\0';j++)
			{
				if((argv[i][j]>='0')&&(argv[i][j]<='9') || argv[i][j]=='-'&&j==0 )
				{
				      if(argv[i][j]=='-'&&j==0)
				      {    		
					s=-1;
				       }
				
				       else
			         	{
				         temp=argv[i][j]-48;
			                  sum=sum*10+temp;
			                 }
			           }
			}
			ptr[k]=sum*s;
			k++;
	}
	ptr[k]='\0';
	printf("Menu\n 0.exit\n a.binary_value\n b.ascending_order\n c.descending_order\n d.polyndrome\n h.help\n");
	if((argv[1][1]='0')||(argv[1][1]=='a')||(argv[1][1]=='b')||(argv[1][1]=='c')||(argv[1][1]=='d')||(argv[1][1]=='h'))
	{
		switch(argv[1][1])
		{
		case '0':
			exit(0);
		case 'a':
			printf("Binary output\n");
			for(i=0;i<(argc-2);i++)
			{
				binary_value(ptr[i]);
			}
			break;
		case 'b':
			ascending_order(ptr,argc-2);
			
			break;
		case 'c':
			descending_order(ptr,argc-2);
			break;
		case 'd':
			int i,stat;
			for(i=2;argv[i];i++)
			{
				stat=polyndrome(argv[i]);
				if(stat==0)
				printf("%s\n",argv[i]);
			}
			break;
		case 'h': 
			help();
			break;
		default:printf("Enter the valid input\n");
		}
	}
	else
	{
		printf("Entered option is invalid:\n");
		printf("If you face inconvienance please use -h flag\n");
		exit(1);
	}
		
}

int binary_value(int ptr)
{
	int j;
	printf("%d-",ptr);
	for(j=31;j>=0;j--)
	{
		if(((0x1<<j)&(ptr))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
		
}
int ascending_order(int *ptr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
		printf("%d\n",ptr[i]);
	}
	
}	
int descending_order(int *ptr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]<ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
		printf("%d\n",ptr[i]);
	}
	
}			
int polyndrome(char *ptr)
{
	int i,j;
	j=strlen(ptr);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		if(ptr[i]!=ptr[j])
		return -1;
	}
	return 0;
}
void help()
{
	printf("choose the correct option\n");
}
