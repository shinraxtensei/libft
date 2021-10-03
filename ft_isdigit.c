#include"libft.h"
//#include<stdio.h>
//#include<ctype.h>
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return(0);
}
/*int main ()
{
    printf("%d",ft_isdigit('a'));
    printf("%d",isdigit('a'));
}*/