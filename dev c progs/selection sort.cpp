#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int main()
{
	int i,n;
	int c,d,temp,pos;
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
		pos=c;
		for(d=c+1;d<n;d++)
		{
			if(arr[pos]>arr[d])
			{
				pos=d;
			}
		}
		if(pos!=c)
		{
			temp=arr[c];
			arr[c]=arr[pos];
			arr[pos]=temp;
		}
	
	}
	printf("\nthe sorted list is:");
	for(c=0;c<n;c++)
		{
			printf("%d",arr[c]);
		}
}
