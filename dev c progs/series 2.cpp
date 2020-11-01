#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float sum1;
	printf("\n enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum1=sum1+1/i-1/2*i;
	}
	printf("\n the sum is:%f",sum1);
}
