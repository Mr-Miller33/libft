/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:52:33 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/21 10:58:22 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    
    if (*little == '\0')
        return ((char *) big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[j] && big[i + j] == little[j] && (i + j) < len)
        {
            if (little[j] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}