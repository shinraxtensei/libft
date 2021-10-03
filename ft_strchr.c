#include"libft.h"
//#include<stdio.h>
char *ft_strchr(const char *str, int c)
{

    while (*(unsigned char *)str)
    {
        if (*(unsigned char *)str == (unsigned char)c)
            return((unsigned char *) str);
        str++;
    }
    return(NULL);
}
/*int main ()
{
    char s[20]="hello";
    printf("%s",ft_strchr(s,'e'));
}*/