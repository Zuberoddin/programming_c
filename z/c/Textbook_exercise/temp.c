#include<stdio.h>
#include<string.h>

int generatePermutation(char*,int,int);
void main()
{
	char str[]="ABC";
	int n=strlen(str);
	int c;
	printf("All the permutations of the string are: \n");
	c=generatePermutation(str,0,n);
	printf("%d\n",c);
}
int generatePermutation(char*str,const int start,int end)
{
	char temp;
	int i,j,count=0;
	for(i=start;i<end-1;++i)
	{
		for(j=i+1;j<end;++j)
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			count++;
			generatePermutation(str,i+1,end);
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			count++;
		}
	}
	printf("%s\n",str);
	return count;
}
