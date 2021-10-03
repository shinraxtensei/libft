#include"libft.h"
//#include<stdio.h>
//#include<ctype.h>
int ft_isalpha(int c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
/*int main ()
{
    printf("%d",ft_isalpha('a'));
    printf("%d",isalpha('a'));
}*/