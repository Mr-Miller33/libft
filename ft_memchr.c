/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moslaoui <moslaoui@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 08:58:19 by moslaoui         #+#    #+#              */
/*   Updated: 2026/10/31 13:29:48 by moslaoui        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (const unsigned char *) s;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *) & p[i]);
		i++;
	}
	return (NULL);
}
