#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int i,ag;
	float salary;
	char name[30],add[100],desg[30];
	fp=fopen("emp.txt","w");
	printf("\nNAME\n");
	scanf("%s",&name);
	fprintf(fp,"NAME=%s\n",name);
	printf("\nADDRESS\n");
	scanf("%s",&add);
	fprintf(fp,"ADDRESS=%s\n",add);
	printf("\nDESIGNATION\n");
	scanf("%s",&desg);
	fprintf(fp,"DESIGNATION=%s\n",desg);
	printf("\nAGE\n");
	scanf("%d",&ag);
	fprintf(fp,"AGE=%d\n",ag);
	printf("\nSALARY\n");
	scanf("%f",&salary);
	fprintf(fp,"SALARY=%f\n",salary);
    fclose(fp);
}


