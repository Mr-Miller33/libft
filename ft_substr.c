/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:36:04 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/20 11:21:09 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *d;
    size_t  slen;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)
        len = 0;
    else if (len > slen - start)
        len = slen - start;
    d = malloc(sizeof(char) * (len + 1));
    if (!d)
        return (NULL);
    i = 0;
    while (i < len)
    {
        d[i] = s[start + i];
        i++;
    }
    d[i] = '\0';
    return (d);
}