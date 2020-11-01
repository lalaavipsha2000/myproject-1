#include<stdio.h>
#include<conio.h>
#define LIMIT 100
int main()
{
	int i,search,first;
	int n,middle,last;
	int array[LIMIT];
	printf("\nenter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n enter the value to search:");
	scanf("%d",&search);
	first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) 
  {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) 
	{
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
}
