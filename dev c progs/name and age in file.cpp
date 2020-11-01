#include <stdio.h>
struct s
{
char name[50];
int age;
};
int main()
{
 struct s a[5],b[5];
 FILE *fptr;
 int i;
 fptr=fopen("file.txt","wb");
 for(i=0;i<5;++i)
 {
 printf("Enter name: ");
 scanf("%s",a[i].name);
 printf("Enter age: ");
 scanf("%d",&a[i].age);
 }
 fwrite(a,sizeof(a),1,fptr);
 fclose(fptr);
 fptr=fopen("file.txt","rb");
 fread(b,sizeof(b),1,fptr);
 for(i=0;i<5;++i)
 {
 	printf("Name: %s\tAge: %d\n",b[i].name,b[i].age);
 }
 fclose(fptr);
}

