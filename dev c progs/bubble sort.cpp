#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int main()
{
	int i,n;
	int c,d,temp;
	int arr[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(c=0;c<(n-1);c++)
	{
		for(d=0;d<(n-c-1);d++)
		{
			if(arr[d]>arr[d+1])
			{
				temp=arr[d];
				arr[d]=arr[d+1];
				arr[d+1]=temp;
			}
		}
	}
	printf("\nthe sorted list is:");
	for(c=0;c<n;c++)
	{
		printf("%d",arr[c]);
	}
	
	
}
