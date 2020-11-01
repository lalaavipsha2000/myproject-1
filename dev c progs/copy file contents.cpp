#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("prg1.txt","r");
	if(fp1=NULL)
	{
		puts("cannot open source file");
	}
	fp2=fopen("prg2.txt","w");
	if(fp2=NULL)
	{
		puts("cannot open target file");
		fclose(fp2);
	}
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,fp2);
		}
		
	}
	printf("\n contents copied");
	fclose(fp1);
	fclose(fp2);
}	
 

