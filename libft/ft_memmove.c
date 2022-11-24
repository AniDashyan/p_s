/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:04:27 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:04:29 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (!len)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (len--)
		cdst[len] = csrc[len];
	return (dst);
}
