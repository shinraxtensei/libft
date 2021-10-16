#include"libft.h"
void ft_strdel(char **as)
{
free(*as);
*as=NULL;
}




/*int main ()
{
char *str;
str = malloc (5);
ft_strdel(&str);
}*/