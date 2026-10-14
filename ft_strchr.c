/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:44:35 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/14 11:36:37 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if ((unsigned char)*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if ((unsigned char)*s == (unsigned char)c)
        return ((char *)s);
    return (NULL);
}