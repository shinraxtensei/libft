#include"libft.h"
#include<stdio.h>

char *ft_strrchr(const char *str, int c)
{
    int i = 0;
    int len ;
    while (*(unsigned char *)str)
    {
        str++;
        i++;
    }
    len = i;
    while (i > 0)
    {  
        if (*(unsigned char *)str == (unsigned char)c)
            return((unsigned char *) str);
        str--;
        i--;
    }
    return((unsigned char *)str+len);
    
    
}
int main ()
{
        char s[20]="hello";
    printf("%s \n",ft_strrchr(s,'a'));
    printf("%s",strrchr(s,'a'));
}