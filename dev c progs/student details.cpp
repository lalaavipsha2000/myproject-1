#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[100];
	float marks1,marks2,marks3,marks4,marks5;
};
int main()
{
	struct student s1,s2,s3;
	printf("roll no. of first student:");
	scanf("%d",&s1.roll);
	printf("enter the name of the student:");
	scanf("%s",&s1.name);
	printf("\nenter the marks of 5 subjects:");
	scanf("%f%f%f%f%f",&s1.marks1,&s1.marks2,&s1.marks3,&s1.marks4,&s1.marks5);
	printf("\n enter the name of the 2nd student:");
	scanf("%s",&s2.name);
	printf("\n enter the roll:");
	scanf("%d",&s2.roll);
	printf("\n enter the marks of 5 subjects:");
	scanf("%f%f%f%f%f",&s2.marks1,&s2.marks2,&s2.marks3,&s2.marks4,&s2.marks5);
	printf("\n enter the name of the 3rd student:");
	scanf("%s",&s3.name);
	printf("\n enter the roll:");
	scanf("%d",&s3.roll);
	printf("\n enter the marks of 5 subjects:");
	scanf("%f%f%f%f%f",&s3.marks1,&s3.marks2,&s3.marks3,&s3.marks4,&s3.marks5);
	printf("\n the elements of the stucrure are:");
	printf("\n NAME:");
	puts(s1.name);
	printf("\n ROLL:%d",s1.roll);
	printf("\n MARKS:%f\n%f\n%f\n%f\n%f\n",s1.marks1,s1.marks2,s1.marks3,s1.marks4,s1.marks5);
	printf("\n NAME:");
	puts(s2.name);
	printf("\n ROLL:%d",s2.roll);
	printf("\n MARKS:%f%f%f%f%f\n\n\n\n\n",s2.marks1,s2.marks2,s2.marks3,s2.marks4,s2.marks5);
	printf("\n NAME:");
	puts(s3.name);
	printf("\n ROLL:%d",s3.roll);
	printf("\n MARKS:%f%f%f%f%f\n\n\n\n\n",s3.marks1,s3.marks2,s3.marks3,s3.marks4,s3.marks5);
}
	


	


	

