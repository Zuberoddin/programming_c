

#include<stdio.h>
#include<string.h>
int mystrcmp(char* s1,char* s2);
void main()
{
	char s1[100]="abbu";
	char s2[100]="abbu";
	int z;
	
	z=mystrcmp(s1,s2);
	if(z==0)
		printf("both are same\n");
	else
		printf("not same\n");
	
	
}




int mystrcmp(char*s1,char*s2)
{
	int i,j,ind;
	if((s1==NULL)||(s2=NULL))
	{
	return -1;
	}
	i=strlen(s1);
	j=strlen(s2);
	if(i!=j){
	return (i-j);
	}
	for(ind=0;(s1[ind]!='\0')||(s2[ind]!='\0');ind++)
	{
		if(s1[ind]!=s2[ind])
		return (s1[ind]-s2[ind]);
	}
	return 0;
}
