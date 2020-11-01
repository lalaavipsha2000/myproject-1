#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int main()
{
	int i,max,min;
	int c,n,location;
	int arr[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(c=0;c<n;c++)
	{
		if(arr[c]>max)
		{
			max=arr[c];
			location=c+1;
		}
		else if(arr[c]<min)
		{
			min=arr[c];
			location=c+1;
		}
	}
	printf("\n the smallest element is:%d",min);
	printf("\n the largest element is:%d",max);	
}
	
