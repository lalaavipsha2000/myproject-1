#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int main()
{
	int i,n,c;
	int search;
	int arr[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n enter the data to search:");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(arr[c]==search)
		{
			printf("\n %d is present at location:%d",search,c+1);
			break;
		}
		
	}
	if(c==n)
		{
			printf("\n %d is not present",search);	
		}
}
