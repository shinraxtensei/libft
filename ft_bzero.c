#include"libft.h"
//#include<stdio.h>
void ft_bzero(void *str, size_t len)
{
    //unsigned char *temp;
    //int i;
    //i = 0;
    //temp = (unsigned char *)str;
    while (len>0)
    {
        *(unsigned char *)str++= '\0';

        len--;
    }
    
}
/*int main ()
{
char tab[50]= "hello afen asat";
ft_bzero(tab,5);
puts(tab);
}*/