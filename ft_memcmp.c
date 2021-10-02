#include"libft.h"
#include<stdio.h>
int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n > 0)
    {
        if(*(unsigned char *)s1 != *(unsigned char *)s2)
            return(*(unsigned char *)s1 - *(unsigned char *)s2);
        s1++;
        s2++;
        n--;
    }
    return(0);
    
}
int main ()
{
    printf("%i",ft_memcmp("zzz","zha",3));
}