#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);
   strrev(s);
   printf("the reversed string is:%s",s);
}



