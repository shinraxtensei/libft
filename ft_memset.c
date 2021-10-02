#include"libft.h"
#include<stdio.h>

void *ft_memset(void *str, int c, size_t len)
{
    //unsigned char *temp;
    //temp = (unsigned char *)str;
    while ( len>0)
    {   
       *(unsigned char *)str++ = (unsigned char)c;
        len--;
    }   
    //str = (void *) temp;
    return (str);
}

int main ()
{

int i = 0;
char tab1[50]= "afen asat cv";
char tab2[50]= "afen asat cv";
memset(tab1,'*',2);
puts(tab1);

i = 0;
ft_memset(tab2,'*',2);
puts(tab2);

}