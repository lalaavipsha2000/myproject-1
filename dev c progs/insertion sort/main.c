#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

int main()
{
    int i,n;
	int j;
	int temp;
	int arr[LIMIT];
	printf("\n enter the size:");
	scanf("%d",&n);
	printf("\n enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 for(i=1;i<n;i++)
{
      temp=arr[i];
      j=i-1;
      while((temp<arr[j])&&(j>=0))
    {
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=temp;
}

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);
}
