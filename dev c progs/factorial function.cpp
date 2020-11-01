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
	int i;
	long int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
