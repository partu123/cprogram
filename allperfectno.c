#include<stdio.h>
int main()
{
	int no,i=1,j=1,sum;
	printf("enter the limit :");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{ sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}

	}
	
	return 0;
}
