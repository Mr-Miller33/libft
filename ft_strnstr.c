/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:52:33 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/15 10:00:02 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    if (*litlle == '\0')
        return ((char *) big);
    while (big[i] && (i + j) <= len)
    {
        j = 0;
        while (little[j] && big[i + j] == little[j] && (i + j) <= len)
        {
            if (litlle[j] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}