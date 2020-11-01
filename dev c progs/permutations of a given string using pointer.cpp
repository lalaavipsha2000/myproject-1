#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100];
	int n;
	printf("\n enter srting:");
	scanf("%s",a);
	n=strlen(a);
	printf("all combinations are:\n");
	perm(a, 0 , n-1);
	getchar();
}
void perm(char *a,int i,int n)
{
	int j;
	if(a==n)
	{
		printf("%s\n",a);	
	}
	else
	{
		for(j=i;j<n;j++)
		{
			swap((a+i),(a+j));
			perm(a,i+1,n);
			swap((a+i),(a+j));
		}
	}
}
void swap(char *c1,char *c2)
{
	char temp;
	temp=*c1;
	*c1=*c2;
	*c2=temp;
}
	
	
	
