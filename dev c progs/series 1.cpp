#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,n;
	float sum;
	printf("\n enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1/pow(i,2);
	}
	printf("\n the sum is:%f",sum);
}
