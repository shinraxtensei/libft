/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:46:10 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/08 11:30:27 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*static size_t	num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*str_convert(char *str, int result, int len)
{
	while (result > 0)
	{
		str[len--] = 48 + (result % 10);
		result = result / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			result;
	int			len;
	char		*nstr;

	len = num_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nstr)
		return (NULL);
	nstr[len--] = '\0';
	if (len == 0)
		nstr[0] = '0';
	if (n < 0)
	{
		result = n * -1;
		nstr [0] = '-';
	}
	else
		result = n;
	nstr = str_convert(nstr, result, len);
	return (nstr);
}*/
static    size_t    ft_len(int nb)
{
    int    len;

    len = 0;
    if (nb <= 0)
        len++;
    while (nb)
    {
        len++;
        nb = nb / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int        len;
    char    *str;
    long    nb;

    len = ft_len(n);
    nb = n;
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    if (nb == 0)
        str[0] = '0';
    str[len--] = '\0';
    while (nb)
    {
        str[len] = nb % 10 + '0';
        len--;
        nb = nb / 10;
    }
    return (str);
}