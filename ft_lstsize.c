/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:45:53 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/10 14:32:37 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*current;

	len = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		len++;
	}
	return (len);
}
