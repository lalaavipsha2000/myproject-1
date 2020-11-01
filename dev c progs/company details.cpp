#include<stdio.h>
#include<conio.h>
struct company
{
	char name[30];
	char address[100];
	int phone;
	int noOfemployee;
};
int main()
{
	struct company c1;
	printf("enter the name of the company:");
	fflush(stdin);
	gets(c1.name);
	printf("enter the address of the company:");
	fflush(stdin);
	gets(c1.address);
	printf("enter the phone:");
	scanf("%d",&c1.phone);
	printf("enter the no. of employees of the company:");
	scanf("%d",&c1.noOfemployee);
	printf("display details\n");
	printf("NAME:%s\n",c1.name);
	printf("ADDRESS:%s\n",c1.address);
	printf("PHONE:%d\n",c1.phone);
	printf("NO. OF EMPLOYEES:%d\n",c1.noOfemployee);	
	
}

