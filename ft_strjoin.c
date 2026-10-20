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

char    *ft_strjoin(char const  *s1, char const *s2)
{
    char    *d;
    size_t  i;
    size_t  j;
    size_t  len1;
    size_t  len2;

    if (!s1 || !s2)
        return (NULL);
    if (len1 > SIZE_MAX - len2 - 1)
        return (NULL;
    d = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!d)
        return (NULL);
    i = 0;
    len1 = ft_strlen(s1);
    while (i < len1)
    {
        d[i] = s1[i];
        i++;
    }
    j = 0;
    len2 = ft_strlen(s2);
    while (j < len2)
    {
        d[i + j] = s2[j];
        j++;
    }
    d[i + j] = '\0';
    return (d);
}