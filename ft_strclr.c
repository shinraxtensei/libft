#include "libft.h"

void	ft_strclr(char *s)
{
	int		len;

	if (!s)
		return ;
	len = ft_strlen(s);
	while (len >= 0)
	{
		s[len] = '\0';
		len--;
	}
}
int main ()
{
    char *str="test";
    ft_strclr(str);
}