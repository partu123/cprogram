#include<stdio.h>

	void main()
	{
		int no,rev;
		printf("enter the  3 digit no :");
		scanf("%d",&no);
		rev=(no%10)*100+((no/10)%10)*10+no/100;
		
		if(no==rev)
		{
			printf("no is palindrome\n");
		}
		else
		{
			printf("no is not palindrome\n");
		}
		printf("revers is : %d",rev);
		return 0;
		
	}

