/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:57:42 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/10 07:57:38 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	i = 0;
	j = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
