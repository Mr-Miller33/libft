/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 08:58:06 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/16 08:58:07 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    size_t  j;
    unsigned char *d;
    const unsigned char *s;
    unsigned char *temp;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    j = 0;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++; 
        }
    }
    else
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dest);
}