#include"libft.h"
#include<stdio.h>
#include<string.h>
void *ft_memccpy(void * dest, const void *src, int c, size_t count)
{
    while (count > 0 && *(unsigned char*)src != (unsigned char)c )
    {
        *(unsigned char *)dest++ = *(unsigned char *)src++;
        count--;

    }
    
    *(unsigned char *)dest = '\0';    
    return (dest); 
}
int main ()
{
char  src[10]="afen asat";
char dest[10];
ft_memccpy(dest,src,'n',10);
puts(dest);
memccpy(dest,src,'n',10);
puts(dest);
}