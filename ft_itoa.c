/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moslaoui <moslaoui@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 09:37:01 by moslaoui         #+#    #+#              */
/*   Updated: 2026/10/31 13:30:53 by moslaoui        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_nbr(long nb, int n)
{
	size_t	count;

	count = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	if (n < 0)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	count;
	char	*str;

	nb = n;
	if (n < 0)
		nb = -nb;
	count = count_nbr(nb, n);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[count] = '\0';
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		count--;
		str[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
