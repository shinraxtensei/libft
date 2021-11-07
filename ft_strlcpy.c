/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:26:15 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/06 10:04:59 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len_dst)
{
	size_t	i;
	size_t	count;	

	if (*dest != 0)
	{
		i = 0;
		count = 0;
		if (!dest || !src)
			return (0);
		while (src[count])
			count++;
		while (src[i] && i + 1 < len_dst)
		{
			dest[i] = src[i];
			i++;
		}
		if (len_dst)
			dest[i] = '\0';
		return (count);
	}
	else
		return (0);
}
