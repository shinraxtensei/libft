#include"libft.h"
//#include<stdio.h>
void * ft_memalloc(size_t size)
{
    int i = 0;
    void *p;
    if((p = malloc (size))==NULL)
        return(NULL);
    else
    {
        while (size > 0)
        {
        *((unsigned char *)p+i) = '\0';
        size--;
        i++;
        }
        return(p);
    }
}
/*int main ()
{
ft_memalloc(5);
}*/