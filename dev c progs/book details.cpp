#include<stdio.h>
#include<stdlib.h>
struct book
{
	int callno;
	char name[100];
	char aname[100];
};
void display(struct book b);
int main()
{
	struct book b1;
	printf("\n enter the name of the book:");
	fflush(stdin);
	gets(b1.name);
	printf("\n enter the name of the author:");
	fflush(stdin);
	gets(b1.aname);
	printf("\n enter the call number:");
	scanf("%d",&b1.callno);
	display(b1);
}
void display(struct book b)
{
	printf("\n name of the book:%s",b.name);
	printf("\n name of the author:%s",b.aname);
	printf("\n call of the number of the author:%d",b.callno);
}


