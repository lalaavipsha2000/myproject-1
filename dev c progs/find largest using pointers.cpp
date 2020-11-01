#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	printf("enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(*p>*q&&*p>*r)
	{
		printf("the largest no. is %d",*p);
	}
	else if(*q>*p&&*q>*r)
	{
		printf("the largest no. is %d",*q);
	}
	else 
	{
		if(*r>*p&&*r>*q)
		{
			printf("the largest no. is %d",*r);
		}
	}
	
}
