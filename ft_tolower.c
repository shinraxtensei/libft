#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		c = c + 32;
	return (c);
}
#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}