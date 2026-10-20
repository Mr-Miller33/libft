/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:59:43 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/20 08:44:26 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *p;

    if (nmemb == 0 || size == 0)
        return (NULL);
    if (size != 0 && nmemb > (SIZE_MAX / size))
        return (NULL);
    p = malloc(nmemb *size);
    if (!p)
        return (NULL);
    ft_bzero(p, nmemb * size);
    return (p);
}