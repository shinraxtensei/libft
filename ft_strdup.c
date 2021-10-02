#include "libft.h"
#include<stdio.h>


char *ft_strdup(const char *str)
{
int i = 0;
char *dest;
if((*dest = (char *) malloc (ft_strlen(str) + 1) == NULL))
    return (NULL);

while (str[i] !=  '\0')
{
    dest[i] = str[i];
    i++;
}
dest[i] = '\0';
return (dest);
}

int main ()
{
    char *p;
p = ft_strdup("Hello");
printf("%c",*p);
}