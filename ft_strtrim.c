/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:36:34 by moslaoui          #+#    #+#             */
/*   Updated: 2026/10/21 09:33:24 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	count;
	size_t	start;
	size_t	end;
	char		*d;
	
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	slen  = ft_strlen(s1);
	i = 0;
	count = 0;
	start = 0;
	end = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] == set[j] && set[j])
		{
			count++;
			j++;
			i++;
			start += i;
		}
		if (s1[i] != set[j])
	}
	if (start == slen)
		return (NULL);
	j = 0;
	while (s1[slen - j] == set[j])
	{
		count++;
		j++;
		end += slen - j;
	}
	d = malloc(sizeof(char) * (slen - count + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (d[i] && (start <= end))
	{
		d[i] = s1[start];
		i++;
		start++;
	}
	return (d);
}