/* wap to find string is anagram or not (same letter but different order) secure=resuce*/
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90],ch1[90];
	char i,j,temp;
	int len1,len2,small;
	printf("enter the string:");
	gets(ch);
	printf("enter the string:");
	gets(ch1);
	len1=strlen(ch);
	len2=strlen(ch1);
     if(len1==len2)
      goto anagram;
      else
      printf("not anagram");
        anagram:
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=i+1;ch[j]!='\0';j++)
		{
			if(ch[i]>ch[j])
			{
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
	for(i=0;ch1[i]!='\0';i++)
	{
		for(j=i+1;ch1[j]!='\0';j++)
		{
			if(ch1[i]>ch1[j])
			{
				temp=ch1[i];
				ch1[i]=ch1[j];
				ch1[j]=temp;
			}
		}
	}  int flag=1;
	for(i=0;i<len1;i++)
	{
		if(ch[i]!=ch1[i])
		{
		       flag=0;
			   break;	
		}
		if(ch[i]==ch[i])
		{
			flag=1;
		}
	}
	if(flag)
	{
		printf("anagram");
	}
	
}
