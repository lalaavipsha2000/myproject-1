#include<stdio.h>
#include<conio.h>
int A(int,int);
int main()
{
int n,m;
printf("enter two numbers:\n");
scanf("%d%d"
,&n,&m);
printf("the output is:%d\n"
,A(n,m));
}
int A(int n,int m)
{
if(n==0)
{
return m+1;
}
if(m==0)
{
return A(n-1,1);
}
else
{
return A(n-1,A(n,m-1));
}
}
