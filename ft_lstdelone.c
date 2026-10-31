/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moslaoui <moslaoui@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/31 13:29:40 by moslaoui         #+#    #+#              */
/*   Updated: 2026/10/31 13:30:50 by moslaoui        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
