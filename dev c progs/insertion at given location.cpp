#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int main()
{
	int i,num,pos;
	int n;
	int arr[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n enter the position:");
	scanf("%d",&pos);
	printf("\n enter the element:");
	scanf("%d",&num);
	if(pos>n+1||pos<=0)
	{
		printf("\n invalid position, enter no. between 1 to %d:",n);
	}
	else 
	{
		for(i=n-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos-1]=num;
		printf("\n after insertion:");
		for(i=0;i<=n;i++)
		{
			printf("\n\t %d",arr[i]);
		}
}
}
