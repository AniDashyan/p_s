/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:03:40 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:03:40 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	while (--n && *(unsigned char *)s != (unsigned char)c)
		s++;
	if (*(unsigned char *)s != (unsigned char)c)
		return (NULL);
	return ((void *)s);
}
