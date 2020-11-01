#include<stdio.h>
#include<conio.h>
#include<math.h>
struct cartesian
{
	int x1,y1;
	int x2,y2;
	float distance;
};
int main()
{
	struct cartesian set1;
	printf("enter the set of first coordinates:");
	scanf("%d%d",&set1.x1,&set1.y1);
	printf("enter the set of second coordinates:");
	scanf("%d%d",&set1.x2,&set1.y2);
	set1.distance=sqrt(pow((set1.x2-set1.x1),2)+pow((set1.y2-set1.y1),2));
	printf(" the set of first coordinates:%d\n%d\n",set1.x1,set1.y1);
	printf(" the set of second coordinates:%d\n%d\n",set1.x2,set1.y2);
	printf("the required distance is:%f\n",set1.distance);
	
	
	
}

