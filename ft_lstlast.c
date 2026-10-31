/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moslaoui <moslaoui@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/31 13:29:41 by moslaoui         #+#    #+#              */
/*   Updated: 2026/10/31 13:30:47 by moslaoui        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
