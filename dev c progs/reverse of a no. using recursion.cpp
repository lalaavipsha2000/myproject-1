#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int getreverse(int n);
int main()
{
	int num,i,reverse=0;
	printf("\n enter the number:");
	scanf("%d",&num);
	reverse=getreverse(num);
	printf("\n the reverse is %d",reverse);
	return 0;
}
int getreverse(int n)
{
	static int r=0;
	if(n==0)
		return 0;
	r = r * 10;
    r = r + n%10;
    getreverse(n/10);
    return r;
    
}
    
