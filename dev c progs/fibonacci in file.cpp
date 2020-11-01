#include <stdio.h>
#include <stdlib.h>
int main()
{
 char a[] = "8";
 int i=0;
 FILE *f1;
 f1= fopen("number1.txt", "w");
 while(a[i]!='\0')
 {
 fputc(a[i], f1);
 i++;
 }
 fclose(f1);
 int num, first=0, second=1, next;
 f1= fopen("number1.txt", "r");
 fscanf(f1, "%d", &num);
 printf("The number read from the file %d\n",num);
 printf("The corresponding fibonacci series : ");
 for(i=0;i<num;i++)
 {
 if (i<=1)
 next=i;
 else
 {
 next= first + second;
 first= second;
 second= next;
 }
 printf("%d\t",next);
 }
 fclose(f1);
 return 0;
}

