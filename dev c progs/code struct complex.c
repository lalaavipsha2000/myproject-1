
#include<stdio.h>
#include<conio.h>
typedef struct complex
{
	int real;
	int imaginary;

}complex;
complex add(complex z1,complex z2);
complex subtract(complex z1,complex z2);
int main()
{
	complex z1,z2,sum,diff;
	printf("enter the real and imaginary parts of the first complex no.:");
	scanf("%d%d",&z1.real,z1.imaginary);
	printf("enter the real and imaginary parts of the second complex no.:");
	scanf("%d%d",&z2.real,z2.imaginary);
	sum=add(z1,z2);
	diff=subtract(z1,z2);
}
complex add(complex z1,complex z2)
{
	complex res1;
	res1.real=(z1.real+z2.real);
	res1.imaginary=(z1.imaginary+z2.imaginary);
	printf(" summation of real part=%d\n summation of imaginary part=%d\n",res1.real,res1.imaginary);
}
complex subtract(complex z1,complex z2)
{
	complex res2;
	res2.real=(z1.real-z2.real);
	res2.imaginary=(z1.imaginary-z2.imaginary);
	printf(" difference of real part=%d\n difference of imaginary part=%d\n",res2.real,res2.imaginary);

}
