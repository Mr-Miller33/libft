/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:36:22 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/20 11:53:21 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_helper(char *dst, const char *src)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(src);
    i = 0;
    while (i < len)
    {
        dst[i] = src[i];
        i++;
    }
    return (dst);
}

char    *ft_strjoin(char const  *s1, char const *s2)
{
    char    *d;
    size_t  len1;
    size_t  len2;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    if (len1 > SIZE_MAX - len2 - 1)
        return (NULL);
    d = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!d)
        return (NULL);
    ft_helper(d, s1);
    ft_helper(d + len1, s2);
    d[len1 + len2] = '\0';
    return (d);
}