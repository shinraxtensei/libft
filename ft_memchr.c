#include"libft.h"
#include<stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
//unsigned char	*temp;
	unsigned int	i;

//	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s+i) == (unsigned char)c)
			return ( (void *)s + i);
		i++;
	}
	return (NULL);

}

int main ()
{
unsigned char tab[15]= "hello";
 printf("%s",ft_memchr(tab,'e',15));
 

}