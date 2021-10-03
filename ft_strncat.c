#include"libft.h"
//#include<stdio.h>
char *ft_strncat(char *dest, const char *src, size_t n)
{
    int i = 0;
    int j = 0;
    while (dest[i])
    {
        i++;
    }
    while (src[j] && n > 0)
    {
        dest[i] = src[j];
        i++;
        j++;
        n--;
    }
    dest[i]= '\0' ;
    return(dest);
}




/*int main()
{
char src[5]="world";
char dest[15]="hello";
    
printf("%s",ft_strncat(dest,src,3));
}*/