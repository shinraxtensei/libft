#include"libft.h"
//#include<stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i = 0;
    while (s1[i] == s2[i] && (n-1) > 0)
    {
        i++;
        n--;
    }
    return( s1[i] - s2[i] );
    
}
/*int main ()
{
    printf("%i",ft_strncmp("aaaw","aaab",3));
    printf("%i",strncmp("aaaw","aaab",3));
}*/