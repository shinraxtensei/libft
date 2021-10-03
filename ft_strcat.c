#include"libft.h"
//#include<stdio.h>
char *ft_strcat(char *dest, const char *src)
{
    int j = 0;
    int i = 0;
    while (dest[i])
        i++;
    
    while (src[j] )
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] ='\0';
    return (dest);    
}
/*int main ()
{
    char src[1]="b";
    char dest[3]="a";
    ft_strcat(dest,src);
    printf("%s",dest);
}*/