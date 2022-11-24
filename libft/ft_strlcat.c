/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:06:05 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:06:06 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
	{
		while (src[i] && (dst_len + i) < dstsize)
			dst[j++] = src[i++];
		if ((dst_len + i) == dstsize && dst_len < dstsize)
			dst[--j] = '\0';
		else
			dst[j] = '\0';
		return (src_len + dst_len);
	}
}
