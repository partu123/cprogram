#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("enter the array element :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display befor sort :");
	for(i=0;i<5;i++)
	{
		print("a[%d]---->a[%d]",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;	
		}
		}
	}
	printf("printf after sort :");
	for(i=0;i<5;i++)
	{
		print("a[%d]---->a[%d]",i,a[i]);
	}
	
	return 0;
}
