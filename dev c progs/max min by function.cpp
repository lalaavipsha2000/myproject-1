#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int maxfind(int arr[],int num);
int minfind(int arr[],int num);
int main()
{
	int i,n,max,min;
	int a[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=maxfind(a,n);
	min=minfind(a,n);
	printf("\n the smallest element is:%d",min);
	printf("\n the largest element is:%d",max);	
}
int maxfind(int arr[0],int num)
{
	int c,location,maxterm;
	maxterm=arr[0];
	for(c=0;c<num;c++)
	{
		if(arr[c]>maxterm)
		{
			maxterm=arr[c];
			location=c+1;
		}
	}
	return maxterm;
	
}
int minfind(int arr[0],int  num)
{
	int c,location,minterm;
	minterm=arr[0];
	for(c=0;c<num;c++)
	{
		if(arr[c]<minterm)
		{
			minterm=arr[c];
			location=c+1;
		}
	}
	return minterm;
	
}


