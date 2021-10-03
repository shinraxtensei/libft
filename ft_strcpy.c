#include"libft.h"
//#include<stdio.h>

char *ft_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
    dest[i] = src[i];
    i++;
}
dest[i] = '\0';
return (dest);
}
/*int main ()
{
    char dest[15];
    char src[15] = "hello";
    printf("%s",ft_strcpy(dest,src));
}*/