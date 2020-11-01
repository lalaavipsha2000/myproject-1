#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,temp=0;
	int *p,*q;
	p=&a;
	q=&b;
	printf("enter the numbers:");
	scanf("%d%d",&a,&b);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("the first no. is %d",*p);
	printf("\nthe second no. is %d",*q);
}
	
	
	
