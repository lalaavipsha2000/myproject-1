#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int getsum(int n);
int main()
{
	int num,i,sum=0;
	printf("\n enter the limit:");
	scanf("%d",&num);
	sum=getsum(num);
	printf("\n the sum is %d",sum);
	return 0;
}
int getsum(int n)
{
	{
		if(n==0)
		{
			return 0;
		}
		else
		{
			return n+getsum(n-1);
		}
	}
	
}
