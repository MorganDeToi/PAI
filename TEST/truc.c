#include <string.h>
#include <stdio.h>

int main ()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
