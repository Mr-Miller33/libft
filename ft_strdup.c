/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:59:25 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/21 10:53:58 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *d;
    size_t     i;
    size_t     max;

    if (!s)
        return (NULL);
    max = ft_strlen(s) + 1;
    d = malloc(sizeof(char) * max);
    if (!d)
        return (NULL);
    i = 0;
    while (i < max)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}