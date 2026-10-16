/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 08:58:16 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/16 11:41:31 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const unsigned char *p1;
    const unsigned char *p2;

    i = 0;
    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;
    while (i < n && p1[i] == p2[i])
        i++;
    if (i == n)
        return (0);
    return (p1[i] - p2[i]);
}