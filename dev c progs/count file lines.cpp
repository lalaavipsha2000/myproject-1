#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int count=0;
	char file[30],ch;
	printf("enter the file name:");
	scanf("%s",&file);
	fp=fopen(file,"r");
	ch=getc(fp);
	while(ch!=EOF)
	{
        if(ch=='\n')
        {
            count++;
		}
		ch=getc(fp);
	}
	fclose(fp);
	printf("there %d lines in %s file\n",count,file);
}	

