/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:06:48 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:06:49 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	j = 0;
	while (haystack[j] && j < len)
	{
		i = 0;
		if (haystack[j] == needle[i])
		{
			while (haystack[j + i]
				&& needle[i] && haystack[j + i] == needle[i]
				&& i + j < len)
				i++;
			if (i == ft_strlen(needle))
				return ((char *)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}
