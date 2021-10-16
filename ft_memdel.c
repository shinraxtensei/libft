#include"libft.h"
//#include<stdio.h>
void ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

/*int main ()
{
    int *p;
    p = malloc(5* sizeof(int));
    ft_memdel(&p);
}*/