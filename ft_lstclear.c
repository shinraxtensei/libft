/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:26:22 by ahouari           #+#    #+#             */
/*   Updated: 2021/11/10 14:26:57 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst)
	{
		current = *lst;
		while (current != NULL)
		{
			next = current->next;
			ft_lstdelone(current,del);
			current = next;
		}
		*lst = NULL;
	}
}