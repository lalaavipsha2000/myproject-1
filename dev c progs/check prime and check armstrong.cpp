#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int checkprime(int num);
int checkarmstrong(int num);
int main()
{
	int a;
	int flag;
	printf("\n enter the number:");
	scanf("%d",&a);
	flag = checkprime(a);
    if (flag == 1)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);
    flag = checkarmstrong(a);
    if (flag == 1)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.",a);
    return 0;
	
}
int checkprime(int num)
{
	int i,flag=1;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int checkarmstrong(int num)
{
	int s=0,flag;
	int dup,d;
	dup=num;
	while(num>0)
	{
		d=num%10;
		num=num/10;
		s=s+pow(d,3);
	}
	if(dup==s)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	return flag;
}
