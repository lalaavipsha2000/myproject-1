#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
	char playername[30];
	char teamname[30];
	float battingaverage;
};
int main()
{
	struct cricket batsmenrecord[5],temp;
	int i,n,j;
	printf("enter total no. of players:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the name of batsmen record[%d]:",i+1);
		fflush(stdin);
		gets(batsmenrecord[i].playername);
		printf("\n enter the team name of batsmen record[%d]:",i+1);
		fflush(stdin);
		gets(batsmenrecord[i].teamname);
		printf("\n enter the batting average of batsmen record[%d]:",i+1);
		scanf("%f",&batsmenrecord[i].battingaverage);
		
    }
    for(i=1;i<=n-1;i++)
    {
    	for(j=1;j<=n-i;j++)
    	{
    		if(strcmp(batsmenrecord[j-1].teamname,batsmenrecord[j].teamname)>0)
    		{
    			temp=batsmenrecord[j-1];
    			batsmenrecord[j-1]=batsmenrecord[j];
    			batsmenrecord[j]=temp;
    			
			}
		}
	}
	printf(" after sorting team wise list of players.");
	for(i=0;i<n;i++)
	{
		printf("%s\t %s\t %f \n\n",batsmenrecord[i].playername,batsmenrecord[i].teamname,batsmenrecord[i].battingaverage);
	}
  }

