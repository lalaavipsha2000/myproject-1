#include<stdio.h>
#include<conio.h>
int main()
{
	char a[]="5";
 	int i=0;
 	FILE *f1;
 	f1= fopen("number.txt", "w");
 	while(a[i]!='\0')
 	{
 fputc(a[i], f1);
 i++;
 }
 fclose(f1);
 int num, fact=1;
 f1= fopen("number.txt", "r");
 fscanf(f1, "%d", &num);
 printf("The number read from the file %d\n",num);
 printf("The corresponding factorial : ");
 for(i=1;i<=num;i++)
 {
 fact*=i;
 }
 printf("%d", fact);
 fclose(f1);
 return 0;
}

