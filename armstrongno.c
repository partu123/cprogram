#include<stdio.h>
int main()
{
	int no,i,temp,p,rem,sum=0,count=0;
	printf("enter the no :");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
	    no=no/10;
	    ++count;
	}
	no=temp;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		p=1;
		for(i=1;i<=count;i++)
		{
			p=p*rem;
		}
		sum=sum+p;
		
	}
	if(temp==sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}
