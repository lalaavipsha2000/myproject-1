#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int checkfact(int n);
int main()
{
	int num;
	long int factorial=1;
	printf("\n enter the number:");
	scanf("%d",&num);
	factorial=checkfact(num);
	printf("\n the factorial is %ld",factorial);
	return 0;
}
int checkfact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*checkfact(n-1);
	}
}
