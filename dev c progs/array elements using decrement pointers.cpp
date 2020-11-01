#include<stdio.h>
#include<stdlib.h>
int main()
{
	int var[3] = {100, 200, 300};
    int i, *ptr;

    /* 
        storing address of the first element 
        of the array in pointer variable
    */
    ptr = &var[2];

    for(i =3; i>0; i--)
    {
        printf("\n\n\nAddress of var[%d] = %d", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);

       // move to the next location
        ptr--;
    }
    return 0;
}
