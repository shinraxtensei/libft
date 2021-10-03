#include"libft.h"
#include<stdio.h>
char	*ft_strnstr(const char *str,const char *to_find,size_t len)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && len > 0)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str+i);
			j++;
		}
		i++;
        len --;
	}
	return (0);
}
int main ()
{
    printf("%s",ft_strnstr("hello world","w",3));
}