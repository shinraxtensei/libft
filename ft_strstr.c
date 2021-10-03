#include"libft.h"
#include<stdio.h>
char	*ft_strstr(const char *str,const char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str+i);
			j++;
		}
		i++;
	}
	return (0);
}
int main ()
{
    printf("%s",ft_strstr("hello",""));
}