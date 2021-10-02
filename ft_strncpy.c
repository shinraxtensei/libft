#include"libft.h"
#include<stdio.h>
char *ft_strncpy(char *dest,const char *src, size_t n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
    
}
int main ()
{
    char src[15]="hello";
    char dest[15];
    printf("%s",ft_strncpy(dest,src,3));
}
