#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90];
	int i,count,len,j,flag=0;
	printf("enter the string:");
	gets(ch);
	len=strlen(ch);
	int mid=len/2;
	for(i=0,j=len-1;i<mid;i++,j--)
	{
		if(ch[i]!=ch[j])
		{
			flag=0;
			break;
		}
		if(ch[i]==ch[j])
		{
			flag=1;
		}
		
	}
	if(flag)
	{
		printf(" palimdrome");
		
	}
	else
	{
		printf(" not palimdrome");
	}
}
