#include<stdlib.h>
#include<stdio.h>
int main()
{
	char s[100];
	int i;
	char *p;
	p=s;
	printf("\n enter the string:");
	scanf("%s",s);
	i=0;
	while(*p!='\0')
	{
		i++;
		p++;
	}
	printf("\n lenght of the string is:%d",i);	
}
