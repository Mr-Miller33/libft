/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:07:04 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/27 15:58:54 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;
	
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		write (fd, "-", 1);
	}
	if (nb >= 10)
		ft_putchar_fd(nb / 10, fd);
	c = (nb % 10) + '0';
	write (fd, &c, 1);
}