//#include<stdio.h>
#include"libft.h"
char * ft_strnew(size_t size)
{
char *str;
if((str = (char *) malloc (size + 1))==NULL)
  return(NULL);
while (size > 0)
{
    *str = '\0';
    str++;
}
return(str);
}


/*int main ()
{
    printf("%s",ft_strnew(5));
}*/