#include"libft.h"
//#include<stdio.h>
void *ft_memcpy(void  *dest, const void *src, size_t n)
{
   //char *temp1;
   //char *temp2;

   //temp1 = (unsigned char *)dest;
  // temp2 = (unsigned char *)src;
   while (n>0)
   {
      *(unsigned char *)dest++ = *(unsigned char *)src++;
      n--;
   }
   *(unsigned char *)dest = '\0';    
   return (dest); 
}
/*int main ()
{
char  src[10]="afen asat";
char dest[10];
ft_memcpy(dest,src,15);
puts(dest);
}*/