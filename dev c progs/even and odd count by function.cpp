#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int getoddcount(int arr[],int num);
int getevencount(int arr[],int num);
int main()
{
	int i,n,oddcount=0,evencount=0;
	int a[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	oddcount=getoddcount(a,n);
	evencount=getevencount(a,n);
	printf("\n no. of odd is:%d",oddcount);
	printf("\n no. of even is:%d",evencount);	
	return 0;
}
int getoddcount(int arr[],int num)
{
	int odd,i;
	odd=0;
	for(i=0;i<num;i++)
	{
		if(arr[i]%2!=0)
		{
			odd++;
		}
	}
	return odd;
}
int getevencount(int arr[],int num)
{
	int even,i;
	even=0;
	for(i=0;i<num;i++)
	{
		if(arr[i]%2==0)
		{
			even++;	
		}
	}
	return even;
			
}



	
	
	
	
	
	
