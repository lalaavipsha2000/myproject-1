#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int getsum(int n);
int main()
{
	int num,i,sum=0;
	printf("\n enter the number:");
	scanf("%d",&num);
	sum=getsum(num);
	printf("\n the sum of digits is %d",sum);
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
			return (n%10)+getsum(n/10);
		}
	}
	
}
