#include <stdlib.h>
#include <stdio.h>

int main()
{
   char *address;

   address = (char*)malloc( 50 * sizeof(char) );  /* allocating memory dynamically  */
   gets(address);

   printf("Address: %s\n", address );
   int c = 0;
   while(address[c] != 0)
   {
       c++;
   }
   printf("%d",c);
   return 0;
}
