/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:28:33 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/07 10:23:10 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;

	i = 0;
	if (to_find == NULL || ft_strlen(to_find) == 0)
		return ((char *)str);
	if (ft_strlen(to_find) > len && str == NULL)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&str[i], to_find, ft_strlen(to_find)) == 0)
		{
			if (i + ft_strlen(to_find) > len)
				return (NULL);
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
